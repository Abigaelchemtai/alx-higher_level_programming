#!/bin/bash
# Bash script that sends a DELETE request
# To the URL passed as the first argument
# displays the body of the response.
curl - sX DELETE "$1"
