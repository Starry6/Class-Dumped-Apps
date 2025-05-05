@interface BDXBridgeOpenMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (long long)authType;
- (id)methodName;
+ (void)finishAllWithParamModel:openStatus:closeStatus:otherCategory:startTime:;
+ (id)metaInfo;
@end
