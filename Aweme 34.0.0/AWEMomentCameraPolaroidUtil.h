@interface AWEMomentCameraPolaroidUtil : NSObject
+ (BOOL)enableSaveAsPolaroidStyle;
+ (void)generatePolaroidStyleWithPhoto:timestamp:filterID:context:completion:;
+ (void)preloadPolaroidResourcesWithContextIfNeeded:;
+ (void)p_preloadPolaroidBGResourcesWithContext:;
+ (void)p_preloadPolaroidFontResourcesWithContext:;
+ (id)polaroidStyleConfigs;
+ (id)p_configItemForFilterID:;
+ (long long)p_bgStyleForPhoto:;
+ (id)p_generatePolaroidStyleWithPhoto:timestamp:frameImage:textFont:textTopOffset:config:;
+ (void)p_drawPhoto:canvasSize:photoHeight:config:;
+ (void)p_drawFrame:canvasSize:;
+ (void)p_drawTimestampTextWithFont:timestamp:canvasSize:photoHeight:textTopOffset:config:;
+ (id)p_timestampText:;
+ (id)p_timestampTextColorWithConfig:;
@end
