@interface LPVideoViewConfiguration : NSObject
@property (nonatomic) BOOL disablePlayback;
@property (nonatomic) BOOL disablePlaybackControls;
@property (nonatomic) BOOL disableAutoPlay;
@property (nonatomic) BOOL allowsLoadingMediaWithAutoPlayDisabled;
@property (nonatomic) double fullScreenTransitionCornerRadius;
- (id)copyWithZone:;
- (BOOL)disablePlayback;
- (void)setDisablePlayback:;
- (BOOL)disablePlaybackControls;
- (void)setDisablePlaybackControls:;
- (BOOL)disableAutoPlay;
- (void)setDisableAutoPlay:;
- (BOOL)allowsLoadingMediaWithAutoPlayDisabled;
- (void)setAllowsLoadingMediaWithAutoPlayDisabled:;
- (double)fullScreenTransitionCornerRadius;
- (void)setFullScreenTransitionCornerRadius:;
@end
