@interface PUEditingExtensionHostContext : NSExtensionContext
@property (nonatomic) @? contentEditingOutputCommitHandler;
- (void).cxx_destruct;
- (void)setContentEditingOutputCommitHandler:;
- (void)commitContentEditingOutput:withCompletionHandler:;
- (id)contentEditingOutputCommitHandler;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
