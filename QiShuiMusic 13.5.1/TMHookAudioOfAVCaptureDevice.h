@interface TMHookAudioOfAVCaptureDevice : TMHook
+ (void)reportRequestAudioPermissionResult:uuid:;
+ (id)stubbedClass;
+ (id)stubbedClassAPIs;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;
@end
