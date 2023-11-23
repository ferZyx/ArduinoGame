// webpage_content.h
#ifndef WEBPAGE_CONTENT_H
#define WEBPAGE_CONTENT_H

String getIndexHtml() {
  return
    "<!DOCTYPE html><html lang='en'><head><meta charset='UTF-8'><meta name='viewport'content='width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=0'><style>body {font-family: Arial, sans-serif;text-align: center;align-items: center;justify-content: center;}.button-container {justify-content: center;align-items: center;height: 200px;}.button {display: inline-block;font-size: 18px;color: #fff;background-color: #4CAF50;border-radius: 5px;margin: 10px;cursor: pointer;height: 90px;width: 90px;}</style></head><body><h1>Плохая игра</h1><div class='button-container'><button class='button' onclick='move(`Up`)''>Up</button><br><button class='button' onclick='move(`Left`)'>Left</button><button class='button' onclick='start()'>X</button><button class='button' onclick='move(`Right`)'>Right</button><br><button class='button' onclick='move(`Down`)'>Down</button></div><script>async function move(direction) {try {const response = await fetch('/move' + direction);if (response.ok) {console.log(`Moved ${direction}`);} else {console.error(`Failed to move ${direction}. Status: ${response.status}`);}} catch (error) {console.error(`Error during move: ${error.message}`);}}async function start() {try {const response = await fetch('/start');if (response.ok) {console.log(`Started`);} else {console.error(`Failed to start. Status: ${response.status}`);}} catch (error) {console.error(`Error during starting: ${error.message}`);}}</script></body></html>";
}

#endif
