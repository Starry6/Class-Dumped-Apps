@interface VSTestSetupPreparationOperation : VSAsyncOperation
@property (nonatomic) NSOperationQueue privateQueue;
@property (nonatomic) NSArray errors;
- (id)privateQueue;
- (void)setPrivateQueue:;
- (void)executionDidBegin;
- (id)init;
- (void)setErrors:;
- (void).cxx_destruct;
- (id)errors;
- (void)addError:;
@end
