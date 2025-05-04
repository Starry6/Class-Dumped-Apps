@interface AWEIMNonUserOneCardMessageView : UIView
@property (nonatomic) AWEIMNonUserOneCardMessageProps props;
@property (nonatomic) UIView bgView;
@property (nonatomic) UIView oneCardView;
@property (nonatomic) UIImageView coverImageView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTap:;
- (id)oneCardView;
- (void)__hidenCoverImageViewWithAnimation:;
- (void)__loadOneCardView;
- (void)__loadCoverImageView;
- (void)setOneCardView:;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (void)setProps:;
@end
