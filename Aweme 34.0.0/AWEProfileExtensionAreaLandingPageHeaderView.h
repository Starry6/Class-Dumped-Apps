@interface AWEProfileExtensionAreaLandingPageHeaderView : UICollectionReusableView
@property (nonatomic) Q type;
@property (nonatomic) UILabel leftLabel;
@property (nonatomic) DUXButton manageButton;
@property (nonatomic) DUXButton doneButton;
@property (nonatomic) @? rightButtonActionBlock;
- (void)setRightButtonActionBlock:;
- (id)manageButton;
- (void)setManageButton:;
- (id)rightButtonActionBlock;
- (void)didClickRightButton;
- (void)refreshWithType:isEditing:isEmptyState:;
- (id)doneButton;
- (void)setDoneButton:;
- (id)initWithFrame:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)leftLabel;
- (void)setLeftLabel:;
@end
