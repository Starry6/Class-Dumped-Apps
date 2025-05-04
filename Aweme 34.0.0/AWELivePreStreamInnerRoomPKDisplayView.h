@interface AWELivePreStreamInnerRoomPKDisplayView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) @? isClickedArea;
- (id)isClickedArea;
- (void)setIsClickedArea:;
- (id)textLabel;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setTextLabel:;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
