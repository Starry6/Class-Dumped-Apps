@interface AWEXBridgeOpenNotificationPermissionGuidePopupMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)presentHalfScreenVC:withView:;
- (void)p_adaptiveLowVersionSystemWithVC:withView:;
- (BOOL)awe_canShowAlert;
- (void)awe_showPushAlert;
- (long long)awe_maxShowCount;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
