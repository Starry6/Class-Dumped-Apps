@interface HTSLiveRoomAuthStatus_RoomAuthSpecialStyle : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRoomAuthStatus_RoomAuthSpecialStyle_Style chat;
@property (nonatomic) BOOL hasChat;
@property (nonatomic) HTSLiveRoomAuthStatus_RoomAuthSpecialStyle_Style gift;
@property (nonatomic) BOOL hasGift;
@property (nonatomic) HTSLiveRoomAuthStatus_RoomAuthSpecialStyle_Style roomContributor;
@property (nonatomic) BOOL hasRoomContributor;
@property (nonatomic) HTSLiveRoomAuthStatus_RoomAuthSpecialStyle_Style like;
@property (nonatomic) BOOL hasLike;
@property (nonatomic) HTSLiveRoomAuthStatus_RoomAuthSpecialStyle_Style roomChannel;
@property (nonatomic) BOOL hasRoomChannel;
@property (nonatomic) HTSLiveRoomAuthStatus_RoomAuthSpecialStyle_Style share;
@property (nonatomic) BOOL hasShare;
@property (nonatomic) HTSLiveRoomAuthStatus_RoomAuthSpecialStyle_Style castScreenAuth;
@property (nonatomic) BOOL hasCastScreenAuth;
@property (nonatomic) HTSLiveRoomAuthStatus_RoomAuthSpecialStyle_Style landscape;
@property (nonatomic) BOOL hasLandscape;
+ (id)descriptor;
@end
