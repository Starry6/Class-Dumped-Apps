@interface BRSharePrepFolderForSharing : BRShareOperation
@property (nonatomic) @? prepFolderSharingCompletionBlock;
- (id)initWithURL:;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)prepFolderSharingCompletionBlock;
- (void)setPrepFolderSharingCompletionBlock:;
@end
