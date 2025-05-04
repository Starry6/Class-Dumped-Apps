@interface AWEIMBigPictureStyleContentView : UIView
@property (nonatomic) AWEIMRefreshImageView coverImageView;
@property (nonatomic) AWEIMRefreshImageView iconImageView;
@property (nonatomic) UIView bubbleView;
@property (nonatomic) UILabel bottomLabel;
@property (nonatomic) UIView bottomContainerView;
@property (nonatomic) AWEIMBigPictureStyleContentProps props;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTap:;
- (id)props;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (id)bubbleView;
- (void)setBubbleView:;
- (void)setBottomLabel:;
- (id)bottomContainerView;
- (id)bottomLabel;
- (void)setBottomContainerView:;
- (void)setProps:;
@end
