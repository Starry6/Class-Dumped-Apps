@interface AWEHotSpotChannelSkylightViewModel : NSObject
@property (nonatomic) BOOL didRenderFinish;
@property (nonatomic) BOOL disableAutoUnfoldSkylight;
@property (nonatomic) Q dataPreloadType;
- (unsigned long long)dataPreloadType;
- (void)setDataPreloadType:;
- (BOOL)didRenderFinish;
- (void)setDidRenderFinish:;
- (BOOL)disableAutoUnfoldSkylight;
- (void)setDisableAutoUnfoldSkylight:;
@end
