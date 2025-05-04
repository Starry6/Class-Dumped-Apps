@interface AWEIMLinkPreviewContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) AWEIMMessageViewModel viewModel;
@property (nonatomic) @? tapAction;
@property (nonatomic) AWEIMLinkPreviewDataController dataController;
- (void)setDataController:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)dataController;
- (id)tapAction;
- (void)setTapAction:;
@end
