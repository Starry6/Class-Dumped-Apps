@interface CUTPromiseSeal : NSObject
@property (nonatomic) CUTPromise promise;
- (void)fulfillWithValue:;
- (void)failWithError:;
- (id)promise;
- (void)setPromise:;
- (void).cxx_destruct;
- (id)initWithQueue:;
@end
