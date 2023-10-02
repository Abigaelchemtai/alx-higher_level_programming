#!/usr/bin/python3
"""Displays the X-Request-Id header variable of a request to a given URL.
Usage: ./5-hbtn_header.py <URL>"""
import sys
import request

if  __name__ == "__main__":
    url = sys.argv[1]
    r = requests.get(url)
    response_id = response.headers.get("X-Request-Id")
    print(response_id)
    pass
