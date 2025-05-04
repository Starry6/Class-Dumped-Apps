@interface AWEIMNoticeUserActionOptions : NSObject
@property (nonatomic) AWEUserModel user;
@property (nonatomic) AWENotificationModelNew notice;
@property (nonatomic) NSString accountType;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) <AFDCloseFriendsColorRingDisplayManagerProtocol> colorRingDisplayManager;
@property (nonatomic) BOOL isPicOrStickerClicked;
- (void)setLogExtraDict:;
- (id)logExtraDict;
- (id)initWithUser:model:accountType:indexPath:logExtraDict:;
- (id)colorRingDisplayManager;
- (void)setColorRingDisplayManager:;
- (BOOL)isPicOrStickerClicked;
- (void)setIsPicOrStickerClicked:;
- (id)user;
- (void)setUser:;
- (id)indexPath;
- (void)setAccountType:;
- (id)accountType;
- (void)setIndexPath:;
- (void).cxx_destruct;
- (id)notice;
- (void)setNotice:;
@end
