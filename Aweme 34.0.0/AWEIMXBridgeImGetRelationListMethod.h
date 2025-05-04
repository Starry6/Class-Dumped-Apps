@interface AWEIMXBridgeImGetRelationListMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (id)__handleRelationListResult:;
- (id)__notDeletedUserOrConvWithData:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
