@interface WBSDKJKSerializer : NSObject
- (void)releaseState;
- (id)serializeObject:options:encodeOption:block:delegate:selector:error:;
- (void)dealloc;
+ (id)serializeObject:options:encodeOption:block:delegate:selector:error:;
@end
