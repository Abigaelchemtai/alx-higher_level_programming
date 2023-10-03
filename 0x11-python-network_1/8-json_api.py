#!/usr/bin/python3
"""Sends a POST request to http://0.0.0.0:5000/search_user with a given letter.
Usage: ./8-json_api.py <letter>
- The letter is sent as the value of the variable `q`.
- If no letter is provided, sends `q=""`"""
import sys
import requests


if __name__ == "__main__":

    if len(sys.argv) > 1:
        letter = sys.argv[1]
    else:
        letter = ""
    payload = {'q': letter}
    response = requests.post('http://0.0.0.0:5000/search_user', data=payload)
    try:
        json_resp = response.json()
        if json_resp == {}:
            print("No result")
        else:
            print("[{}] {}".format(json_resp.get('id'), json_resp.get('name')))
    except ValueError:
        print("Not a valid JSON")
        pass
