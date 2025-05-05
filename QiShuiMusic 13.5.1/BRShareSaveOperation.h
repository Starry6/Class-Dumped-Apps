@interface BRShareSaveOperation : BRShareOperation
@property (nonatomic) CKShare share;
@property (nonatomic) @? shareSaveCompletionBlock;
- (void)setShare:;
- (id)share;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)initWithShare:;
- (id)initWithShare:fileURL:;
- (id)shareSaveCompletionBlock;
- (void)setShareSaveCompletionBlock:;
+ (BOOL)shouldRetryShareSaveOnError:;
@end
