@interface BRShareCopyShareURLOperation : BRShareOperation
@property (nonatomic) CKShare share;
@property (nonatomic) NSString appName;
@property (nonatomic) @? shareCopyURLCompletionBlock;
@property (nonatomic) @? copyShareURLCompletionBlock;
- (void)setShare:;
- (id)share;
- (void)setAppName:;
- (id)appName;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (void)setCopyShareURLCompletionBlock:;
- (id)initWithFileURL:documentType:;
- (id)initWithShare:documentType:;
- (id)shareCopyURLCompletionBlock;
- (void)setShareCopyURLCompletionBlock:;
- (id)initWithShare:fileURL:documentType:;
- (id)copyShareURLCompletionBlock;
@end
