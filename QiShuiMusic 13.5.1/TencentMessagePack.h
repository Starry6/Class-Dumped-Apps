@interface TencentMessagePack : NSObject
+ (id)dataWithTencentReqMessage:;
+ (BOOL)messageVaild:;
+ (id)packTencentReqMessage:appId:;
+ (id)packTencentRespMessage:platform:;
@end
