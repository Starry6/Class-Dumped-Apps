@interface AWEIMEmoticonPanelPageCollectionViewCell : UICollectionViewCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEIMEmoticonPreviewHelper previewHelper;
@property (nonatomic) UILongPressGestureRecognizer previewLongPressGuesture;
@property (nonatomic) UIView panelContentView;
@property (nonatomic) UIView emptyContentView;
@property (nonatomic) AWEIMEmoticonLoadingView loadingView;
@property (nonatomic) <AWEIMEmoticonActionComponent> actionComponent;
@property (nonatomic) BOOL enableDrag;
@property (nonatomic) Q pageState;
@property (nonatomic) <AWEIMEmoticonPanelPage> page;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)setEnableDrag:;
- (id)panelGestureRecognizers;
- (BOOL)enableDrag;
- (id)emptyContentView;
- (void)setEmptyContentView:;
- (void)didEndDisplayingCell;
- (id)panelContentView;
- (void)p_setupLoadingView;
- (id)previewLongPressGuesture;
- (void)setImageViewsAnimationPause:;
- (id)actionComponent;
- (void)setActionComponent:;
- (id)previewHelper:emotionModelAtIndexPath:;
- (void)createEmptyViewWithEmptyContentView:;
- (void)setPanelContentViewHidden:;
- (void)previewHelper:beginPreviewEmotionModel:;
- (void)p_pageStateUpdatedWithNewValue:oldValue:;
- (void)p_setupEmptyContentView;
- (void)p_setupStatusView:;
- (void)setPreviewLongPressGuesture:;
- (id)previewHelper;
- (void)setPreviewHelper:;
- (void)setPanelContentView:;
- (id)collectionView;
- (id)page;
- (void)prepareForReuse;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void)setCollectionView:;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)setPage:;
- (void)handleLongPressGesture:;
- (void)willDisplayCell;
- (unsigned long long)pageState;
- (void)setPageState:;
- (void)retryButtonPressed:;
@end
