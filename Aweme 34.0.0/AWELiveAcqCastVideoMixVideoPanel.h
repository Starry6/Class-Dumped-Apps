@interface AWELiveAcqCastVideoMixVideoPanel : AWELiveAcqCastVideoBasePanel
@property (nonatomic) AWEMixVideoModel mixVideoModel;
@property (nonatomic) AWELiveAcqMixVideoDetailListView detailView;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)mixVideoModel;
- (void)setMixVideoModel:;
- (void)onClickBack;
- (void).cxx_destruct;
- (id)detailView;
- (void)setDetailView:;
- (void)refreshData;
- (id)initWithFrame:viewModel:;
@end
