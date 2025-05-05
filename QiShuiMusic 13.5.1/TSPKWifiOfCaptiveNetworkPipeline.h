@interface TSPKWifiOfCaptiveNetworkPipeline : TSPKDetectPipeline
- (BOOL)deferPreload;
+ (BOOL)isEntryDefaultEnable;
+ (id)stubbedCAPIs;
+ (id)stubbedClass;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;
@end
