@interface VSFileRemoveOperation : VSAsyncOperation
@property (nonatomic) NSError error;
@property (nonatomic) NSURL fileURL;
- (void)executionDidBegin;
- (void)setFileURL:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)fileURL;
@end
