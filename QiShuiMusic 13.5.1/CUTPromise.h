@interface CUTPromise : CUTUnsafePromise
- (id)then:;
- (void)registerResultBlock:;
+ (id)all:;
+ (id)failedPromiseWithError:;
+ (id)fulfilledPromiseWithValue:;
+ (id)allWithPartialSuccesses:;
@end
