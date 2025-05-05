@interface IESLiveSaaSLandscapeAudienceMoreToolsPanelView : UIView
@property (nonatomic) IESLiveSaaSLandscapeMoreToolsStore store;
@property (nonatomic) IESLiveSaaSGradientBackgroundView gradientView;
@property (nonatomic) UIView maskView;
- (id)initWithFrame:store:diContext:;
- (id)setupItemViewsForMore;
- (void)setupVSRoomSportsUI;
- (void)dealloc;
- (void)setStore:;
- (id)maskView;
- (void)layoutSubviews;
- (id)gradientView;
- (void).cxx_destruct;
- (void)setGradientView:;
- (id)store;
- (void)setMaskView:;
- (void)setupUI;
- (void)setupItemViews;
@end
