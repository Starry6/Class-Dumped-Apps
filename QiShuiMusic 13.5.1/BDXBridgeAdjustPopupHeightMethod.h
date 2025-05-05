@interface BDXBridgeAdjustPopupHeightMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (id)viewControllerForResponder:;
- (long long)authType;
- (id)methodName;
@end
