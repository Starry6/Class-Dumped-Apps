@interface VSStorefrontCodeLoadOperation : VSAsyncOperation
@property (nonatomic) VSOptional result;
@property (nonatomic) NSOperationQueue privateQueue;
- (id)privateQueue;
- (void)setPrivateQueue:;
- (id)result;
- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;
- (void)setResult:;
@end
