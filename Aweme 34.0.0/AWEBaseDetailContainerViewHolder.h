@interface AWEBaseDetailContainerViewHolder : AWEBaseListViewHolder
@property (nonatomic) AWEButton shareBtn;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) UIButton backBtn;
- (void)setupViewHolder;
- (void)dismissLoadingView;
- (id)backBtn;
- (void)setBackBtn:;
- (id)shareBtn;
- (void)setShareBtn:;
- (void)setLoadingView:;
- (id)loadingView;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)showLoadingView;
@end
