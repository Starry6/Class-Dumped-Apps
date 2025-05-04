@interface AWEPlayInteractionPOICommentTagScoreElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel preTitleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)preTitleLabel;
- (void)setPreTitleLabel:;
- (void)viewDidDisposed;
- (void)viewDidLoad;
- (id)contentView;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)reset;
- (void)setIconImageView:;
+ (id)activateInfoWithContext:;
@end
