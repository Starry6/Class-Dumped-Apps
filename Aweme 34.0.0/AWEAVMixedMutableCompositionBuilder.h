@interface AWEAVMixedMutableCompositionBuilder : AWEAVMutableCompositionBuilder
@property (nonatomic) NSObject<ACCEditVideoDataProtocol> videoData;
- (void)setTotalRate:;
- (id)getCompileSessionWithSuggestedSize:suggestedAudioRate:;
- (id)checkTimeRange:forAsset:;
- (void)addAsset:timeRange:adjust:;
- (void)setClipTimeRange:forAsset:adjust:;
- (id)targetSizeWithIsForPlayDisplay:;
- (void)moveAssetFrom:to:;
- (void)setRotateType:forAsset:;
- (void)setRate:forAsset:;
- (id)getPlayerItem;
- (id)getPlayerItemWithBookkeepingRange;
- (void)updateVideoDataClipInfoForBookkeepingRange:;
- (void)commonConfigVideoData:;
- (void)setCroppingParamsIfNeededWithVideoData:;
- (id)getPlayerData;
- (id)getPlayerDataWithBookkeepingRange;
- (void)setTransformInfo:forAsset:;
- (void)setMediaInfoForSinglePictureAsset;
- (id)getCompileSession;
- (id)getCompileSessionWithTransform:;
- (id)getCompileSessionWithVideoData:;
- (void)updateVideoFromLv:;
- (void).cxx_destruct;
- (void)setVideoData:;
- (void)removeAsset:;
- (id)videoData;
@end
