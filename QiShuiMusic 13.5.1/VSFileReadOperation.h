@interface VSFileReadOperation : VSAsyncOperation
@property (nonatomic) VSOptional result;
@property (nonatomic) NSURL source;
- (id)result;
- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (void)setResult:;
@end
