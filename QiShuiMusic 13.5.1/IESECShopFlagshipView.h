@interface IESECShopFlagshipView : UIView
@property (nonatomic) UIImageView leftIconView;
@property (nonatomic) UILabel rightDescLabel;
- (id)leftIconView;
- (id)rightDescLabel;
- (void)setLeftIconView:;
- (void)setRightDescLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupViews;
- (void)updateWithStyle:;
@end
