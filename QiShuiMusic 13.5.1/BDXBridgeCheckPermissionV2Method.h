@interface BDXBridgeCheckPermissionV2Method : BDXBridgeMethod
- (Class)paramModelClass;
- (void)_callbackWithPermissionStatus:completionHandler:;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
+ (void)checkPermission:refererContext:completion:;
+ (void)execCheckPermission:refererContext:completion:;
+ (void)notificationPermissionWithCompletion:;
+ (unsigned long long)permissionStatusForCalendarWithRefererContext:;
+ (id)permissionStatusForContacts;
+ (id)permissionStatusForLocation;
+ (unsigned long long)permissionStatusForMediaType:;
+ (id)metaInfo;
@end
