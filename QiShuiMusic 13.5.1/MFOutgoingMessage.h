@interface MFOutgoingMessage : MFMailMessage
- (id)messageStore;
- (id)messageBody;
- (void).cxx_destruct;
- (unsigned long long)messageSize;
- (id)headers;
- (id)messageData;
- (void)setMessageBody:;
- (id)messageBodyIfAvailable;
- (BOOL)messageData:messageSize:isComplete:downloadIfNecessary:;
- (id)messageDataHolder;
- (BOOL)messageDataHolder:messageSize:isComplete:downloadIfNecessary:;
- (id)mutableHeaders;
- (void)setMutableHeaders:;
- (id)headersIfAvailable;
@end
