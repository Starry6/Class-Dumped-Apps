@interface IESLiveGiftStorageSelectedGuest : MTLModel
@property (nonatomic) NSArray toUsers;
@property (nonatomic) BOOL allMic;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString mixedAnchorID;
@property (nonatomic) Q recordActionType;
- (id)toUsers;
- (BOOL)allMic;
- (id)initWithToUsers:allMic:roomID:mixedAnchorID:recordActionType:;
- (id)mixedAnchorID;
- (unsigned long long)recordActionType;
- (void)setAllMic:;
- (void)setMixedAnchorID:;
- (void)setRecordActionType:;
- (void)setToUsers:;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
@end
