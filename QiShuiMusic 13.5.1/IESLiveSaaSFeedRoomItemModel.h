@interface IESLiveSaaSFeedRoomItemModel : IESLiveSaaSFeedRoomItem
@property (nonatomic) Q coverStyle;
@property (nonatomic) IESLiveSaaSFeedPageStore store;
@property (nonatomic) # cellClass;
@property (nonatomic) BOOL didTrackStay;
@property (nonatomic) BOOL didTrackStreak;
@property (nonatomic) BOOL inFeedDrawer;
@property (nonatomic) NSString drawerPage;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRecommendRoom;
- (void)setEnterMethod:;
- (unsigned long long)coverStyle;
- (id)enterFrom;
- (id)enterMethod;
- (id)initWithModel:store:;
- (id)itemSizeInCollectionView:;
- (void)setCoverStyle:;
- (void)setEnterFrom:;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
@end
