@interface AWEPOIDetailNGUGCFloatingTagsComponentView : DitoComponentView
@property (nonatomic) AWEPOIDetailFeedUgcFilterTagsView tagsView;
@property (nonatomic) AWEPOIDetailNGPageContext context;
@property (nonatomic) AWEPOIDetailNGUGCFloatingTagsComponentViewModel viewModel;
- (id)tagsView;
- (void)setTagsView:;
- (void)updateViewModel:;
- (void)bindActionAndState;
- (void)showFloatTagView;
- (void)hiddenFloatTagView;
- (void)reloadTags;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
