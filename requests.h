#ifndef REQUESTS_H
#define REQUESTS_H

/*Connection:
   A transport layer virtual circuit established between two programs for the purpose of communication*/

struct message {
//Basic unit of HTTP communication, consisting of octets matching the syntax defined in sect. 4 and transmitted via the connection
//Consists of a request OR response (not both?)

//Both consist of:
    //Start line
    //Zero or more header fields
    //an empty line
    //possibly a message body
};

struct request {
//An HTTP request message as defined in sect. 5
//Server should ignore empty lines above request line
};

struct response {
//An HTTP response message as defined in sect. 6
};

//Proxy: An intermediary program which acts as both a server and client for the purpose of making requests on behalf of other clients.

//Gateway: A server which acts as an intermediary for some other server. Unlike a proxy a gateway receives requests as if it were the origin server for the requested resource
//Client may not be aware that it is communicating with a gateway

//Tunnel: Intermediary program which is acting as a blind relay between two connections

//Cache: A programs local store of response messages and the subsystem that controls it's message storage, retrieval, and deletion
//A response is cacheable if a cache is allowed to store a copy of the response message for use in answering subsequent requests

//Note to self: figure out if cache should be implemented in library or in each unique application and how

//Octect: any 8-bit sequence of data
//Char: any US-ASCII character
//ALPHA: Any upper or lowercase character "A".."z"
//DIGIT: 0-9
//CTL: Any US-ASCII control character (octects 0 - 31)
//CR: Carriage return (13)
//LF: Linefeed (10)
//SP: Space (32)
//HT: Horizontal-tab (9)
//": double quote mark (34)
#endif