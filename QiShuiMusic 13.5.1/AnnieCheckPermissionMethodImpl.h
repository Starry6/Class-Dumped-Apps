@interface AnnieCheckPermissionMethodImpl : AnnieCheckPermissionMethod
- (void)_callbackWithPermissionStatus:completionHandler:;
- (void)callWithParamModel:completionHandler:;
+ (void)permissionService:checkPermission:refererContext:completion:;
@end
