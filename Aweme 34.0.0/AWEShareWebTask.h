@interface AWEShareWebTask : AWEShareCommonTask
- (void)prepareWithChannel:inView:;
- (BOOL)doesPlatformSupportsImageSharing:;
+ (id)taskWithWebModel:;
+ (id)commonShareTypes;
+ (BOOL)showGenarateImageChannelWithContext:;
+ (id)updateShareChannels:webMetadata:context:;
+ (id)commonShareTypesAddExtraChannels:;
+ (id)allShareTypeOfSandBoxImage;
+ (id)allShareChannelsOfWeb:context:;
+ (id)allShareTypesOfWeb;
+ (id)allShareChannelsOfWebView:context:task:;
+ (id)allShareTypesOfWebView;
+ (id)allShareTypesOfWebImage;
+ (id)removeType:InChannels:;
+ (BOOL)canShowForwardToStoryWithContext:;
+ (void)configChannelWithContext:;
+ (void)configTokenWithContext:;
+ (id)contextWithWebModel:;
+ (id)statsShareWebStage;
+ (id)prepareShareWebModelStage;
+ (id)webRequestAlbumAccessStage;
+ (id)webGetLocalImageStage;
@end
