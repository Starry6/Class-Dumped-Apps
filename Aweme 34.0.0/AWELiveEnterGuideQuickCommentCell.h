@interface AWELiveEnterGuideQuickCommentCell : UICollectionViewCell
@property (nonatomic) UIView backgroundColorView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) AWELiveEnterGuideQuickViewModel viewModel;
@property (nonatomic) @? quickCommentClickedBlock;
- (void)setQuickCommentClickedBlock:;
- (void)clickContentView:;
- (id)quickCommentClickedBlock;
- (id)textLabel;
- (id)viewModel;
- (id)initWithFrame:;
- (id)backgroundColorView;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setBackgroundColorView:;
- (void)setTextLabel:;
- (void)setupUI;
- (void)updateModel:;
@end
