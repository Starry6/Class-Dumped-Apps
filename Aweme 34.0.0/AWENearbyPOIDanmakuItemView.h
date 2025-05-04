@interface AWENearbyPOIDanmakuItemView : UIView
@property (nonatomic) AWENearbyPOIDanmakuModel item;
@property (nonatomic) UIView bgView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? clickBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)onTapView:;
- (void)configWithItem:index:;
- (id)accessibilityLabel;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)isAccessibilityElement;
- (id)bgView;
- (void)setBgView:;
- (void)setIconImageView:;
@end
