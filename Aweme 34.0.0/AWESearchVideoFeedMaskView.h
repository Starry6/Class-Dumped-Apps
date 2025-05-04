@interface AWESearchVideoFeedMaskView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel despLabel;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configureUI;
- (id)despLabel;
- (void)setDespLabel:;
- (void)configureWithAwemeModel:;
- (void)showInView:autoDismiss:;
- (void)viewDidTap:;
- (void)dealloc;
- (id)initWithFrame:;
- (void)dismiss;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)dismissBlock;
- (void)setDismissBlock:;
+ (BOOL)shouldShowWithAwemeModel:;
@end
