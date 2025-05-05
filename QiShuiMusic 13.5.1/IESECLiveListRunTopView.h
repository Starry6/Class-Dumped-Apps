@interface IESECLiveListRunTopView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView topArrowImageView;
@property (nonatomic) UILabel topLabel;
@property (nonatomic) UIView guideView;
@property (nonatomic) UILabel guideLabel;
@property (nonatomic) BOOL isGuideAnimating;
@property (nonatomic) <IESECLiveListRunTopViewDelegate> delegate;
- (void)addBizAction;
- (void)clickContainerAction;
- (id)guideLabel;
- (BOOL)isGuideAnimating;
- (void)setGuideLabel:;
- (void)setIsGuideAnimating:;
- (void)setTopArrowImageView:;
- (void)showGuideView;
- (id)topArrowImageView;
- (id)containerView;
- (void)setContainerView:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
- (id)topLabel;
- (void)setTopLabel:;
- (void)setGuideView:;
- (id)guideView;
@end
