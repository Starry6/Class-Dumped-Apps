@interface AWELandscapePlaybackSettingView : UIView
- (void)setupTrackSettingClickAction:;
- (void)setupTrackSettingChangeAction:;
- (void)onSegmentValueChanged:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)initWith:;
+ (id)defaultSettingView;
+ (long long)currentPlaybackSetting;
+ (void)setCurrentPlaybackSetting:;
+ (id)currentPlaybackSettingTrackDescription;
+ (id)playbackSettingKey;
@end
