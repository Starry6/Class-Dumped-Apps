@interface FPUnarchiveOperation : FPActionOperation
@property (nonatomic) @? passphraseRequestBlock;
@property (nonatomic) @? unarchiveCompletionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (void)actionMain;
- (void)service:didReceiveArchivedItemsDescriptors:;
- (id)initWithItem:destinationFolder:;
- (id)_newParentProgressWithCompletedUnitCount:;
- (BOOL)getHasUnarchivedMultipleItems:firstUnarchivedItemURL:forArchiveFolderURL:error:;
- (BOOL)_handleArchiveDecryptionError:item:service:itemURL:;
- (void)_completeWithItemURL:item:service:resultURL:error:;
- (void)__completeWithItem:service:resultURL:error:;
- (id)findUniqueUnarchivedName:isFolder:parent:;
- (id)passphraseRequestBlock;
- (void)setPassphraseRequestBlock:;
- (id)unarchiveCompletionBlock;
- (void)setUnarchiveCompletionBlock:;
@end
