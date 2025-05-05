@interface IESLiveDanmakuNotifyEffectView : IESLiveDanmakuBaseView
@property (nonatomic) IESLiveFlexBackgroundImageView enterView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) double danmakuWidth;
@property (nonatomic) IESLiveDanmakuNotifyEffectViewModel viewModel;
- (void)updateWithNode:;
- (double)danmakuWidth;
- (id)enterView;
- (void)refreshDanmakuWithViewModel:;
- (void)setDanmakuWidth:;
- (void)setEnterView:;
- (void)trackDanmakuShow;
- (void)updateContainerViewBackground;
- (id)viewModel;
- (void)prepareForReuse;
- (void)layoutContainerView;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)contentLabel;
- (void)setContentLabel:;
@end
