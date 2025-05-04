@interface AWENearbyBottombarView : UIView
@property (nonatomic) UIView nearbyMaskView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView leftImageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView arrowImageView;
- (void)__buildUI;
- (void)__configUI;
- (id)nearbyMaskView;
- (void)setNearbyMaskView:;
- (id)textLabel;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setTextLabel:;
- (id)leftImageView;
- (id)arrowImageView;
- (void)setArrowImageView:;
- (void)setLeftImageView:;
@end
