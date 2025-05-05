@interface ICLiveLinkQRConnectionMessageCoder : MSVQRConnectionMessageCoder
- (id)messageFromData:;
- (id)dataFromMessage:;
- (id)traceIdentifierForMessage:;
@end
