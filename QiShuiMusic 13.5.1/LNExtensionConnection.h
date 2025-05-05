@interface LNExtensionConnection : LNConnection
@property (nonatomic) _EXExtensionProcess extensionProcess;
- (void)dealloc;
- (void).cxx_destruct;
- (void)connectWithOptions:;
- (void)refreshWithOptions:;
- (void)connectionOperationWillStart:;
- (id)extensionIdentityWithExtensionPointIdentifier:error:;
- (id)extensionProcess;
- (void)setExtensionProcess:;
@end
