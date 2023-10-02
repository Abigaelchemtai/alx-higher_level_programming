#!/usr/bin/python3
"""Lists the 10 most recent commits on a given GitHub repository.
Usage: ./100-github_commits.py <repository name> <repository owner>
"""
import sys
import requests


if __name__ == "__main__":
    repo = sys.argv[1]
    owner = sys.argv[2]
    url = f'https://api.github.com/repos/{owner}/{repo}/commits'
    response = requests.get(url)
    json_resp = response.json()

for commit in json_resp[:10]:
    commit_data = commit['commit']
    sha = commit_data.get('sha')
    author = commit_data.get('author').get('name')
    print(f"{sha}: {author}")
    pass
