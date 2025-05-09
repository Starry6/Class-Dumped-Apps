@interface IESLiveSaaSRecommendAnchorsPopView : UIView
@property (nonatomic) IESLiveSaaSRecommendAnchorsStore store;
@property (nonatomic) IESLiveSaaSPBRecommendUsersMessage model;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UITableView tableView;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) IESLiveSaaSGradientBackgroundView gradientView;
@property (nonatomic) UITapGestureRecognizer tapGestureRecognizer;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerOriginalFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerTargetFrame;
@property (nonatomic) q orientation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_createUIComponents;
- (id)containerOriginalFrame;
- (id)containerTargetFrame;
- (void)hidePopViewAnimated:;
- (double)popviewHeight;
- (void)setContainerOriginalFrame:;
- (void)setContainerTargetFrame:;
- (void)showPopViewAnimated:orientation:;
- (void)updateBGImage;
- (void)updateCellStatus;
- (id)model;
- (id)contentView;
- (void)setStore:;
- (void)setModel:;
- (BOOL)isAnimating;
- (id)initWithStore:;
- (void)setTitleLabel:;
- (id)containerView;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setTapGestureRecognizer:;
- (void)setContainerView:;
- (long long)orientation;
- (id)tapGestureRecognizer;
- (id)gradientView;
- (double)tableView:heightForRowAtIndexPath:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)setContentView:;
- (void)setTableView:;
- (void)setGradientView:;
- (id)store;
- (void)setIsAnimating:;
- (id)titleLabel;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)tableView;
- (void)setOrientation:;
- (long long)tableView:numberOfRowsInSection:;
- (void)_layoutContainerView;
- (void)setBgImageView:;
- (id)bgImageView;
@end
