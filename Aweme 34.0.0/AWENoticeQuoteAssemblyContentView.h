@interface AWENoticeQuoteAssemblyContentView : UIView
@property (nonatomic) AWENoticeQuoteAssemblyContentViewModel viewModel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel quoteAssemblyContentLabel;
@property (nonatomic) UIImageView rightImageView;
- (id)quoteAssemblyContentLabel;
- (void)setQuoteAssemblyContentLabel:;
- (void)transferToOpenURLSchema;
- (void)configWithModel:maxWidth:;
- (id)viewModel;
- (id)initWithFrame:;
- (id)iconImageView;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setIconImageView:;
- (id)rightImageView;
- (void)setRightImageView:;
@end
