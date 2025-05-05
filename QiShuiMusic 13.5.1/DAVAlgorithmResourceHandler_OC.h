@interface DAVAlgorithmResourceHandler_OC : DAVResourceHandler_OC
@property (nonatomic) {shared_ptr<davinci::algorithm::AlgorithmResourceHandler>=^{AlgorithmResourceHandler}^{__shared_weak_count}} internalHandler;
- (BOOL)canHandleWithResource:;
- (id)initWithHandler:;
- (id)initWithConfig:;
@end
