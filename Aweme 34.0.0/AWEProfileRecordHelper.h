@interface AWEProfileRecordHelper : NSObject
+ (void)postProfileRecordWithParams:completionBlock:;
+ (void)postProfileRecordWithKey:valueDic:completionBlock:;
+ (void)postProfileRecordWithParams:;
+ (void)postProfileRecordWithKey:valueDic:;
@end
