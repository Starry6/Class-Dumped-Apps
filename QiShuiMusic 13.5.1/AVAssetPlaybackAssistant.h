@interface AVAssetPlaybackAssistant : NSObject
- (id)initWithAsset:;
- (void)dealloc;
- (id)_playbackConfigurationOptions;
- (void)loadPlaybackConfigurationOptionsWithCompletionHandler:;
+ (id)assetPlaybackAssistantWithAsset:;
@end
