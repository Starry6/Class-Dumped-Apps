@interface IESLiveGiftPageStore : NSObject
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) NSArray giftModels;
@property (nonatomic) NSArray remainingGiftIDs;
@property (nonatomic) NSArray giftGroup;
@property (nonatomic) BOOL shouldShowReddot;
- (id)giftGroup;
- (id)giftModels;
- (id)remainingGiftIDs;
- (void)setGiftGroup:;
- (void)setGiftModels:;
- (void)setRemainingGiftIDs:;
- (void)setTrackContext:;
- (BOOL)shouldShowReddot;
- (id)trackContext;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
