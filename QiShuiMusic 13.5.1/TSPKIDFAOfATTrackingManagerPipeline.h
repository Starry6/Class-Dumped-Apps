@interface TSPKIDFAOfATTrackingManagerPipeline : TSPKDetectPipeline
+ (BOOL)isEntryDefaultEnable;
+ (void)reportIDFAPermissionStatus:uuid:;
+ (id)stubbedClass;
+ (id)stubbedClassAPIs;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;
@end
