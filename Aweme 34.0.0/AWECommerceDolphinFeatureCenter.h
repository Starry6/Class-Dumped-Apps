@interface AWECommerceDolphinFeatureCenter : NSObject
+ (id)getFeatureBySolaria:withModel:withStrategy:;
+ (id)batchGetFeaturesBySolaria:withStrategy:;
+ (void)registerPitayaMessageHandler;
+ (void)registerPitayaMessageHandlerWhenReady;
+ (void)setupDolphinFeatureCenter;
+ (void)injectToDolphinFeatureCenter:;
+ (void)injectToDolphinFeatureCenterWithModel:;
@end
