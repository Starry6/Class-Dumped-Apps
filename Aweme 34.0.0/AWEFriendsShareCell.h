@interface AWEFriendsShareCell : UIView
@property (nonatomic) BOOL shouldUseConstColor;
@property (nonatomic) UIView circleView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) @? shareBlock;
- (id)initWithConstColor:;
- (void)setCellImage:withTitle:;
- (void)setShareBlock:;
- (BOOL)shouldUseConstColor;
- (void)setShouldUseConstColor:;
- (id)shareBlock;
- (void)share:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (id)circleView;
- (void)setCircleView:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
