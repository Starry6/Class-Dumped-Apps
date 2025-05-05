@interface IESLiveGiftPartitionPageStore : NSObject
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) NSMutableArray pageSections;
@property (nonatomic) NSMutableArray giftModelsByPartitionArray;
@property (nonatomic) NSArray giftGroup;
- (id)giftGroup;
- (id)giftModelsByPartitionArray;
- (id)pageSections;
- (void)setGiftGroup:;
- (void)setGiftModelsByPartitionArray:;
- (void)setPageSections:;
- (void)setTrackContext:;
- (id)trackContext;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
