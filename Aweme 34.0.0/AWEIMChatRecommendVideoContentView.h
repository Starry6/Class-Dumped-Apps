@interface AWEIMChatRecommendVideoContentView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSDictionary typeMap;
@property (nonatomic) NSArray videos;
@property (nonatomic) <AWEIMChatRecommendVideoContentViewDelegate> delegate;
@property (nonatomic) AWEIMChatRecommendVideoContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)configWithModel:;
- (void)didClickSendButtonAtIndexPath:;
- (void)didClickChatButtonAtIndexPath:;
- (id)centerCell;
- (void)awemeDidSentAtIndexPath:;
- (double)cellRadius;
- (id)startViewForIndexPath:;
- (void)setTypeMap:;
- (void)didBecomeActive;
- (id)collectionView;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)didResignActive;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (BOOL)scrollToIndexPath:;
- (Class)cellClass;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setContext:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (id)context;
- (id)videos;
- (void)setVideos:;
- (id)typeMap;
@end
