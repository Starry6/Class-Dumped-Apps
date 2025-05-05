@interface AWEIMChatRoomInviteMessage : AWEIMMessage
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString brief;
@property (nonatomic) IESIMURLModel coverURL;
@property (nonatomic) BOOL hasAuthJoinRoom;
- (BOOL)hasAuthJoinRoom;
- (id)brief;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)setBrief:;
- (void)setHasAuthJoinRoom:;
- (void)updateHasAuthJoinRoom:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (id)copyWithZone:;
- (id)roomID;
- (void)setRoomID:;
- (id)coverURL;
- (void)setCoverURL:;
+ (long long)customMessageType;
@end
