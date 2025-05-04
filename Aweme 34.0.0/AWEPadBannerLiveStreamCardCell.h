@interface AWEPadBannerLiveStreamCardCell : AWEPadPolymericChannelBannerCardCell
@property (nonatomic) UIView liveStreamView;
@property (nonatomic) UIButton volumeSwitchBtn;
@property (nonatomic) UIView tagView;
- (void)removeLiveStreamViewIfNeeded;
- (void)setLiveStreamView:;
- (void)setVolumeSwitchBtn:;
- (id)liveStreamView;
- (id)volumeSwitchBtn;
- (void)addLiveStreamView:volumeSwitchBtn:;
- (void)updateTagView:;
- (void)bringCoverImageViewToFront:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)tagView;
- (void)setTagView:;
@end
