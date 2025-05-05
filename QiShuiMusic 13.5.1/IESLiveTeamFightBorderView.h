@interface IESLiveTeamFightBorderView : UIView
@property (nonatomic) UIImageView ownerBorderView;
@property (nonatomic) UIImageView oppoBorderView;
@property (nonatomic) CALayer ownerLayer;
@property (nonatomic) CALayer oppoLayer;
- (id)ownerBorderView;
- (id)oppoBorderView;
- (id)oppoLayer;
- (id)ownerLayer;
- (void)remakeBorderAppearance;
- (void)setOppoBorderView:;
- (void)setOppoLayer:;
- (void)setOwnerBorderView:;
- (void)setOwnerLayer:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupViews;
@end
