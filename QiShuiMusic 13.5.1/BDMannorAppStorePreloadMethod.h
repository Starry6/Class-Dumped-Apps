@interface BDMannorAppStorePreloadMethod : BDXBridgeMethod
@property (nonatomic) BOOL enableMannorAppStore;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (BOOL)enableMannorAppStore;
- (void)setEnableMannorAppStore:;
- (long long)authType;
- (id)methodName;
@end
