@interface BRUploadAllFilesForLogOutOperation : BROperation
@property (nonatomic) BRGlobalProgressProxy progress;
@property (nonatomic) @? uploadAllFilesCompletionBlock;
@property (nonatomic) BOOL shouldKeepDataLocal;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)cancel;
- (void)setProgress:;
- (id)progress;
- (void)main;
- (void).cxx_destruct;
- (id)description;
- (void)finishWithResult:error:;
- (void)evictAllFilesInGroup:;
- (id)uploadAllFilesCompletionBlock;
- (void)setUploadAllFilesCompletionBlock:;
- (BOOL)shouldKeepDataLocal;
- (void)setShouldKeepDataLocal:;
@end
