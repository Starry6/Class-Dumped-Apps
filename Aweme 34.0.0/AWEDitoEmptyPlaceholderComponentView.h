@interface AWEDitoEmptyPlaceholderComponentView : DitoComponentView
@property (nonatomic) AWEDitoEmptyPlaceholderComponentViewModel viewModel;
@property (nonatomic) AWEDitoEmptyViewController emptyVC;
- (void)updateViewModel:;
- (void)bindActionAndState;
- (id)emptyVC;
- (void)setEmptyVC:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
