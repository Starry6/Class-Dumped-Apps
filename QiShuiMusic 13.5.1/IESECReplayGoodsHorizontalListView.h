@interface IESECReplayGoodsHorizontalListView : UIView
@property (nonatomic) IESECPlaybackGoodsCardListView listView;
@property (nonatomic) <IESECReplayGoodsHorizontalListViewDelegate> delegate;
@property (nonatomic) IESECLiveReplayDataStore dataStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dataStoreChangedWhenRequestMore;
- (id)currentFetchPromotionIDList:;
- (void)dataStoreChanged;
- (id)initWithFrame:dataStore:delegate:;
- (BOOL)isFromGoodsDetail;
- (void)listView:changeCardWithModel:localIndex:;
- (void)listView:reqeustNextPageWithCompletion:;
- (BOOL)shouldUseMultiCard;
- (void)showViewInParent:;
- (void)updateDataSource;
- (void)setDataStore:;
- (id)dataStore;
- (void)goBack;
- (void)setDelegate:;
- (void)setListView:;
- (id)listView;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
@end
