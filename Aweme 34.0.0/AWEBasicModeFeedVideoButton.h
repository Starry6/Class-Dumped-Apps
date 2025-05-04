@interface AWEBasicModeFeedVideoButton : UIButton
@property (nonatomic) UIImageView aweImageView;
@property (nonatomic) UILabel label;
@property (nonatomic) UIView containerView;
- (id)aweImageView;
- (void)setAweImageView:;
- (id)initWithLabelString:imageNameString:;
- (void)updateWithLabelString:;
- (void)updateWithImageNameString:;
- (void)setLabel:;
- (id)containerView;
- (id)label;
- (void)setContainerView:;
- (void).cxx_destruct;
@end
