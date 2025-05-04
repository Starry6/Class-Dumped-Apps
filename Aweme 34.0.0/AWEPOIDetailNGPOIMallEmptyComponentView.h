@interface AWEPOIDetailNGPOIMallEmptyComponentView : DitoComponentView
@property (nonatomic) UIImageView mallEmptyView;
@property (nonatomic) UILabel mallLabel;
@property (nonatomic) AWEPOIDetailNGPOIMallEmptyComponentViewModel viewModel;
- (void)updateViewModel:;
- (id)mallLabel;
- (id)mallEmptyView;
- (void)setMallEmptyView:;
- (void)setMallLabel:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupUI;
@end
