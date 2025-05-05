@interface IESLiveGiftStorageGuildGameGuest : MTLModel
@property (nonatomic) HTSLiveUser toUser;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString anchorID;
- (id)initWithToUser:roomID:anchorID:;
- (id)anchorID;
- (void)setAnchorID:;
- (void)setToUser:;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
- (id)toUser;
@end
