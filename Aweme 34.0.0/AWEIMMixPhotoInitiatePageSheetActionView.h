@interface AWEIMMixPhotoInitiatePageSheetActionView : UIView
@property (nonatomic) AWEIMMixPhotoInitiatePageSheetViewModel viewModel;
@property (nonatomic) UIButton negativeButton;
@property (nonatomic) UIButton positiveButton;
@property (nonatomic) UILabel describeLabel;
@property (nonatomic) UIView tipImageView;
@property (nonatomic) <AWEIMMixPhotoInitiatePageSheetActionViewDelegate> delegate;
- (id)tipImageView;
- (void)setTipImageView:;
- (id)describeLabel;
- (void)setDescribeLabel:;
- (void)createComponents;
- (void)configComponents;
- (id)negativeButton;
- (id)positiveButton;
- (void)setNegativeButton:;
- (void)setPositiveButton:;
- (void)p_didClickNegativeButton:;
- (void)p_didClickPositiveButton:;
- (id)initWithViewModel:;
- (id)delegate;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutComponents;
@end
