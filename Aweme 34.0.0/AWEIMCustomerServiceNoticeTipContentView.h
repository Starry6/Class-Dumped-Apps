@interface AWEIMCustomerServiceNoticeTipContentView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) YYLabel titleLable;
@property (nonatomic) @? tapAction;
@property (nonatomic) AWEIMCustomerServiceNoticeTipContentProps props;
- (id)titleLable;
- (void)setTitleLable:;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_updateConstraints;
- (void)p_initProps;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_iconViewRemoveAnimation;
- (void)p_iconViewAddAnimation;
- (void)p_onTap;
- (id)props;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)tapAction;
- (void)setTapAction:;
- (void)setProps:;
@end
