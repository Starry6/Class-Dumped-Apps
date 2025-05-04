@interface AWEIMGroupNoticeModifyContentView : AWEIMShapeView
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) YYLabel contentLabel;
@property (nonatomic) UIView lineView;
@property (nonatomic) UIFont textFont;
@property (nonatomic) UIImageView icon;
@property (nonatomic) AWEIMGroupNoticeModifyContentProps props;
- (void)p_addSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_addTapAction;
- (id)textFont;
- (id)icon;
- (id)props;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setTextFont:;
- (void)setProps:;
+ (id)bubbleContentPaddingInsets;
+ (double)lineMargin;
@end
