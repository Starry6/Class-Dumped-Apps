@interface AWENearbyC2FeedLiveCell : AWENearbyC2BaseFeedCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didClick;
- (void)handleTapGes:;
- (void)endDisplay;
- (void)trackCellClickForOtherEvents;
- (void)trackClientShowForOtherEvents;
- (void)configCellWithModel:withIndex:cellWidth:pageContext:;
- (void)onClickWithModel:;
- (void)willDisplayWhenDidAppear;
- (void)addChildVCWithCellWidth:;
- (void)trackCellLiveRoomShowWithAweme:;
- (void)trackCellLiveRoomClickWithAweme:;
- (id)liveRoomCommonParamsWithAweme:;
- (void)removeEndLiveRoom;
- (void)prepareForReuse;
- (id)initWithFrame:;
+ (id)calculateCellSizeWithWidth:model:;
@end
