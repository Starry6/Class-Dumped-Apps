@interface IESIMPushMessageReceiver : TTPushMessageReceiver
- (int)dispatch:method:payloadEncoding:payloadType:payload:seqid:logid:headers:;
@end
