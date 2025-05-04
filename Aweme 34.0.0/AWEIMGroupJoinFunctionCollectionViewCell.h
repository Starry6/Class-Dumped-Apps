@interface AWEIMGroupJoinFunctionCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIButton iconButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEIMGroupJoinCardFunctionModel model;
- (void)configWithModel:;
- (void)setUpLayout;
- (void)setModel:;
- (void)dealloc;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)iconButton;
- (void)setIconButton:;
- (void)setUpUI;
@end
