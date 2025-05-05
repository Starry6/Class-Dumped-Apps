@interface TMHookVideoOfAVCaptureDevice : TMHook
+ (void)reportRequestCameraPermissionResult:uuid:;
+ (id)stubbedClass;
+ (id)stubbedClassAPIs;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;
@end
