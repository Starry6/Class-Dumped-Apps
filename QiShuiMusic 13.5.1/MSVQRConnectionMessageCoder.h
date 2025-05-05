@interface MSVQRConnectionMessageCoder : NSObject
- (id)messageFromData:;
- (id)dataFromMessage:;
- (id)traceIdentifierForMessage:;
@end
