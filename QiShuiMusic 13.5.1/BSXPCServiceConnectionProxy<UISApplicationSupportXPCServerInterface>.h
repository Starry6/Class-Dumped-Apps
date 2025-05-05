@interface BSXPCServiceConnectionProxy<UISApplicationSupportXPCServerInterface> : BSXPCServiceConnectionProxy
- (void)destroyScenesPersistentIdentifiers:animationType:destroySessions:completion:;
- (id)requestPasscodeUnlockUIWithCompletion:;
- (void)initializeClientWithParameters:completion:;
@end
