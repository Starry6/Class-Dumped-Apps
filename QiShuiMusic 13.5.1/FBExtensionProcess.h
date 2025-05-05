@interface FBExtensionProcess : FBProcess
@property (nonatomic) FBSExtensionInfo extensionInfo;
@property (nonatomic) FBProcess hostProcess;
@property (nonatomic) NSInteger hostPID;
- (id)hostProcess;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (int)hostPID;
- (void)_finishInit;
- (BOOL)isExtensionProcess;
- (id)extensionInfo;
@end
