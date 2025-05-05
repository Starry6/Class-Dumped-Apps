@interface MFIMAPMessageWithCache : MFIMAPMessage
- (void)setHeaders:;
- (void).cxx_destruct;
- (id)headers;
- (id)messageData;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)setMessageData:isPartial:;
- (BOOL)messageDataHolder:messageSize:isComplete:downloadIfNecessary:;
- (id)headersIfAvailable;
- (id)headerData;
@end
