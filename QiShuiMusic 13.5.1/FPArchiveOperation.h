@interface FPArchiveOperation : FPActionOperation
@property (nonatomic) @? archiveCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)initWithItems:destinationFolder:;
- (void)_coordinateArchivedItemsWithCompletionHandler:;
- (void)_copyArchivedItemsWithCompletionHandler:;
- (void)_prepareItemsWithCompletionHandler:;
- (void)_archiveURLs:completionHandler:;
- (id)findUniqueArchivedName:isFolder:parent:;
- (void)actionMain;
- (id)_zipPathExtension;
- (void)presendNotifications;
- (void)didUnarchiveItemAtURL:;
- (id)archiveCompletionBlock;
- (void)setArchiveCompletionBlock:;
@end
