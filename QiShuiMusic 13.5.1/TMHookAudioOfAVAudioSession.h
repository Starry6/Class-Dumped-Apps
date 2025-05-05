@interface TMHookAudioOfAVAudioSession : TMHook
+ (void)reportRequestAudioPermissionResult:uuid:;
+ (id)stubbedClass;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;
@end
