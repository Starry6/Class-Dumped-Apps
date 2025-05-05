@interface TTPushMessageReceiver : NSObject
- (int)dispatch:method:payloadEncoding:payloadType:payload:seqid:logid:headers:;
@end
