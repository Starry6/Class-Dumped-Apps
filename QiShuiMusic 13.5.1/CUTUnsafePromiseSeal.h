@interface CUTUnsafePromiseSeal : NSObject
@property (nonatomic) CUTUnsafePromise promise;
- (id)init;
- (void)fulfillWithValue:;
- (void)failWithError:;
- (id)promise;
- (void)setPromise:;
- (void).cxx_destruct;
@end
