@interface FPRenameOperation : FPActionOperation
- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (void)finishWithResult:error:;
- (void)actionMain;
- (void)presendNotifications;
- (id)initWithItem:newName:;
- (id)initWithItem:newFileName:;
- (id)initWithItem:newDisplayName:;
- (id)initWithItem:newNameInternal:;
@end
