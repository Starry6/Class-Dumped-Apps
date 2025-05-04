@interface AWEPlayletProfileRelativeBarView : UIView
@property (nonatomic) UILabel leftLabel;
@property (nonatomic) UILabel rightLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) AWEPlayletCardInfoModel playletCardInfoModel;
@property (nonatomic) @? relativeBarTapCallBack;
- (void)setRelativeBarTapCallBack:;
- (void)setCardInfoModel:;
- (id)relativeBarTapCallBack;
- (id)playletCardInfoModel;
- (void)setPlayletCardInfoModel:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)tapGesture;
- (void)setIconImageView:;
- (id)leftLabel;
- (id)rightLabel;
- (void)setLeftLabel:;
- (void)setRightLabel:;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (double)relativeBarViewHeight;
@end
