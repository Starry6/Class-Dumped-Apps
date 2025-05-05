@interface IESLiveSaaSRoomDrawModel : NSObject
@property (nonatomic) NSString giftID;
@property (nonatomic) NSString giftViewPopupType;
@property (nonatomic) NSString taskStatus;
@property (nonatomic) BOOL fromCoinTask;
@property (nonatomic) BOOL toSingleRoom;
@property (nonatomic) NSDictionary routeParams;
- (void)setRouteParams:;
- (BOOL)fromCoinTask;
- (id)giftID;
- (id)giftViewPopupType;
- (id)routeParams;
- (void)setFromCoinTask:;
- (void)setGiftID:;
- (void)setGiftViewPopupType:;
- (void)setTaskStatus:;
- (void)setToSingleRoom:;
- (BOOL)toSingleRoom;
- (void).cxx_destruct;
- (id)taskStatus;
@end
