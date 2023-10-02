#!/usr/bin/python3
"""Displays the X-Request-Id header variable of a request to a given URL.
Usage: ./1-hbtn_header.py <URL>
"""
import sys
import urllib.request

if __name__ == "__main__":
    url = sys.argv[1]
    request = urllib.request.Request(url)
    with urllib.request.urlopen(request) as response:
        headers = response.getheaders()
        header_dict = dict(headers)
        request_id = header_dict.get('X-Request-Id')
        print(request_id)
        pass
