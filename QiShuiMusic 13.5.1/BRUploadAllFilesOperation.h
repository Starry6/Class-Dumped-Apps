@interface BRUploadAllFilesOperation : BROperation
@property (nonatomic) @? uploadAllFilesCompletion;
- (id)initWithContainer:;
- (id)init;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)uploadAllFilesCompletion;
- (void)setUploadAllFilesCompletion:;
@end
