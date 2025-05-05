@interface MANetUtils : NSObject
+ (BOOL)isValidNetReqOptions:;
+ (id)performRPCAsyncWith:resultCallback:;
+ (id)performRPCSyncWith:error:;
@end
