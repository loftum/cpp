mkdir -p bin
if [ -z "$1" ]
  then
    echo "File missing."
    echo "Usage: run.sh file.cpp"
    exit 0
fi
outFile="${1%%.*}"
g++ $1 -o ./bin/$outFile
./bin/$outFile