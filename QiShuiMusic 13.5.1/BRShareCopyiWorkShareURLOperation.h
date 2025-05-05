@interface BRShareCopyiWorkShareURLOperation : BROperation
@property (nonatomic) CKShare share;
@property (nonatomic) NSString appName;
@property (nonatomic) @? shareCopyURLCompletionBlock;
- (void)setShare:;
- (id)share;
- (void)setAppName:;
- (id)appName;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)initWithShare:appName:;
- (id)initWithShare:documentType:;
- (id)shareCopyURLCompletionBlock;
- (void)setShareCopyURLCompletionBlock:;
+ (id)iWorkShareableExtensions;
@end
