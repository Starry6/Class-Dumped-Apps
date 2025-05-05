@interface FPCreateFolderOperation : FPActionOperation
@property (nonatomic) BOOL shouldBounceOnCollision;
@property (nonatomic) @? createFolderCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (void)actionMain;
- (void)presendNotifications;
- (BOOL)shouldBounceOnCollision;
- (void)setShouldBounceOnCollision:;
- (id)initWithParentItem:folderName:;
- (id)createFolderCompletionBlock;
- (void)setCreateFolderCompletionBlock:;
@end
