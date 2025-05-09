@interface AWERVLVEpisodesView : UIView
@property (nonatomic) UIView headerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BDImageView icon;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIView moreView;
@property (nonatomic) UILabel moreLabel;
@property (nonatomic) UIImageView moreImg;
@property (nonatomic) AWELVideoAlbumInfoModel albumInfoModel;
@property (nonatomic) q index;
@property (nonatomic) NSArray episodeList;
@property (nonatomic) BOOL isOnPannel;
@property (nonatomic) <AWERVLVEpisodesViewDelegate> delegate;
@property (nonatomic) <AWERVLVSelectDelegate> selectDelegate;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) BOOL fromFeedShare;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)descLabel;
- (void)setDescLabel:;
- (id)episodeList;
- (void)setEpisodeList:;
- (id)moreView;
- (void)setMoreView:;
- (BOOL)isFromFeedShare;
- (void)showXiguaGuideTitleIfNeeded;
- (BOOL)shouldShowGuide;
- (void)setFromFeedShare:;
- (void)setAlbumInfoModel:;
- (id)albumInfoModel;
- (void)updateWithModel:title:subTitle:episodeList:currentSelectIndex:;
- (void)updateWithModel:episodeList:currentSelectIndex:;
- (void)setSelectDelegate:;
- (BOOL)isOnPannel;
- (id)moreImg;
- (void)refreshUIAfterUpdate;
- (id)selectDelegate;
- (void)showAllPanel;
- (void)setMoreImg:;
- (void)setIsOnPannel:;
- (void)setIndex:;
- (long long)index;
- (id)collectionView;
- (id)delegate;
- (id)icon;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (id)headerView;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setTitleLabel:;
- (void)setIcon:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)initWithFlag:;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setHeaderView:;
- (void)setupUI;
- (id)moreLabel;
- (void)setMoreLabel:;
@end
