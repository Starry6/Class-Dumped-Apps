@interface IESLiveAudioThemeCell : UICollectionViewCell
@property (nonatomic) IESLiveAudioThemeCellViewModel viewModel;
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) UIImageView loadingView;
@property (nonatomic) UIView backgroundMaskView;
@property (nonatomic) UIView borderView;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) IESLiveAudioBackgroundView audioBackgroundView;
@property (nonatomic) @? deleteBlock;
- (void)setDeleteBlock:;
- (id)audioBackgroundView;
- (void)bindViewModel;
- (void)setAudioBackgroundView:;
- (void)setTagLabel:;
- (id)tagLabel;
- (void)setupConstraints;
- (id)viewModel;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)deleteButton;
- (void)setViewModel:;
- (id)titleLabel;
- (void)setDeleteButton:;
- (void)setupViews;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:;
- (id)borderView;
- (void)setBorderView:;
- (void)updateWithViewModel:;
- (id)loadingView;
- (void)setLoadingView:;
- (id)statusLabel;
- (void)setStatusLabel:;
- (id)deleteBlock;
@end
