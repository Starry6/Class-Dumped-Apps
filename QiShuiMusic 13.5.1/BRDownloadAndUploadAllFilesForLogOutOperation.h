@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation
@property (nonatomic) BRGlobalProgressProxy progress;
@property (nonatomic) @? downloadAllFilesCompletionBlock;
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
- (void)finishWithResult:error:;
- (id)downloadAllFilesCompletionBlock;
- (void)setDownloadAllFilesCompletionBlock:;
@end
