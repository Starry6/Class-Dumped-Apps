@interface AWENoticeInteractionSubSegmenterdControl : UIView
@property (nonatomic) UICollectionView secondaryTabCollectionView;
@property (nonatomic) <_TtP13AWENoticeImpl62AWENoticeInteractionCommentAndDanmakuSegmenterdControlDelegate_> delegate;
@property (nonatomic) q selectedIndex;
@property (nonatomic) NSArray subTabsModels;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)secondaryTabCollectionView;
- (void)setSecondaryTabCollectionView:;
- (id)initWithDefaultSelectedIndex:delegate:itemType:;
- (void)handleLandingSubTab;
- (void)handleRepeatTapCommentTab;
- (void)configWithModelsWithModels:;
- (id)getFilterType;
- (long long)getSelectGroupID;
- (id)subTabsModels;
- (void)setSubTabsModels:;
- (id)delegate;
- (id)initWithFrame:;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)initWithCoder:;
@end
