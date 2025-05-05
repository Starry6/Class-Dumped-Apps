@interface TMHookCalendarOfEKEventStore : TMHook
+ (void)reportRequestCalendarPermissionResult:uuid:;
+ (id)stubbedClass;
+ (id)stubbedInstanceAPIs;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;
@end
