@interface AWELiveVSFreeTrailFinishView : UIView
@property (nonatomic) UIVisualEffectView blurEffectBackgroundView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) AWELiveVSFreeTrailFinishCard freeTrailFinishCard;
- (void)reloadWithData:;
- (id)blurEffectBackgroundView;
- (void)setBlurEffectBackgroundView:;
- (void)setFreeTrailFinishCard:;
- (id)freeTrailFinishCard;
- (id)init;
- (void)layout;
- (void)setup;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
@end
