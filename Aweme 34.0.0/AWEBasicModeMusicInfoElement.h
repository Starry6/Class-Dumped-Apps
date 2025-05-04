@interface AWEBasicModeMusicInfoElement : AWEBasicModeFakeElement
@property (nonatomic) AWEBasicModeAwemeMusicInfoView musicInfoView;
@property (nonatomic) NSString musicLabelString;
@property (nonatomic) double bottomOffset;
- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)p_setup;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (id)musicInfoView;
- (void)updateMusicInfoView;
- (void)setMusicLabelString:;
- (void)p_layoutMusicInfoViewWithModel:;
- (id)musicLabelString;
- (void)setMusicInfoView:;
- (void)setModel:;
- (void).cxx_destruct;
- (void)reset;
- (double)bottomOffset;
- (void)setBottomOffset:;
@end
