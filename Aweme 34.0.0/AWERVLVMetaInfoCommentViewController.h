@interface AWERVLVMetaInfoCommentViewController : UIViewController
@property (nonatomic) UIScrollView containerScrollView;
@property (nonatomic) UITableView metaTableView;
@property (nonatomic) AWERelatedVideoDetailVideoCommentViewController commentVC;
@property (nonatomic) UILabel commentTitle;
@property (nonatomic) UIPanGestureRecognizer gestureCheckRecoginizer;
@property (nonatomic) AWELVideoAlbumInfoModel albumModel;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) @? didCreateInputView;
@property (nonatomic) @? didHideInputView;
@property (nonatomic) @? willHideInputView;
@property (nonatomic) @? didShowInputView;
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showInputView;
- (id)commentVC;
- (void)setCommentVC:;
- (id)commentTitle;
- (void)setCommentTitle:;
- (id)didHideInputView;
- (id)willHideInputView;
- (id)didShowInputView;
- (id)didCreateInputView;
- (void)refreshModel:params:;
- (void)setDidCreateInputView:;
- (void)setDidHideInputView:;
- (void)setWillHideInputView:;
- (void)setDidShowInputView:;
- (id)gestureCheckRecoginizer;
- (void)setGestureCheckRecoginizer:;
- (void)albumInfoDidLoad:;
- (void)scrollToComment;
- (id)metaTableView;
- (id)albumModel;
- (void)refreshCommentViewWithModel:params:;
- (void)refreshMetaInfoWithModel:params:;
- (void)setAlbumModel:;
- (void)onCommentScrollViewDidScroll:;
- (void)setMetaTableView:;
- (void)setModel:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)model;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)containerScrollView;
- (void)setContainerScrollView:;
- (void)updateTitle;
- (void)setPageContext:;
- (id)pageContext;
@end
