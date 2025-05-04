@interface AWESearchAIGCInputVideoRSHeaderView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) <AWESearchAIGCInputVideoRSHeaderViewDelegate> delegate;
- (void)closeAction:;
- (id)delegate;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
+ (double)viewHeight;
@end
