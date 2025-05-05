@interface TMHookPushOfUNUserNotificationCenter : TMHook
+ (void)reportPushPermissionResult:uuid:;
+ (id)stubbedClass;
+ (id)stubbedInstanceAPIs;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;
@end
