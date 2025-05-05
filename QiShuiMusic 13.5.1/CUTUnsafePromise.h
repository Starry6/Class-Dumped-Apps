@interface CUTUnsafePromise : NSObject
- (id)then:;
- (id)_init;
- (void)registerResultBlock:;
+ (id)all:;
+ (id)failedPromiseWithError:;
+ (id)fulfilledPromiseWithValue:;
+ (id)allWithPartialSuccesses:;
@end
