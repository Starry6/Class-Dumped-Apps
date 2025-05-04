@interface AWENoticeInteractionCommentAndDanmakuSegmenterdControl : UIView
@property (nonatomic) UICollectionView secondaryTabCollectionView;
@property (nonatomic) <_TtP13AWENoticeImpl62AWENoticeInteractionCommentAndDanmakuSegmenterdControlDelegate_> delegate;
@property (nonatomic) q selectedIndex;
@property (nonatomic) NSArray commentAndDanmakuSubTabsModels;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)initWithDefaultSelectedIndex:delegate:;
- (void)handleLandingCommentAndDanmakuTab;
- (id)commentAndDanmakuSubTabsModels;
- (void)setCommentAndDanmakuSubTabsModels:;
- (id)secondaryTabCollectionView;
- (void)setSecondaryTabCollectionView:;
- (void)handleRepeatTapCommentTab;
- (id)getFilterType;
- (id)delegate;
- (id)initWithFrame:;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)initWithCoder:;
@end
