@interface AWEIMBigImageMessageView : UIView
@property (nonatomic) UIImageView displayImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEIMBigImageMessageProps props;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (id)displayImageView;
- (void)setDisplayImageView:;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTap:;
- (id)props;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setProps:;
@end
