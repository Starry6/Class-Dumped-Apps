@interface IESLiveSaaSPBRoomRankMessage_RoomRank : GPBMessage
@property (nonatomic) IESLiveSaaSPBUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString scoreStr;
@property (nonatomic) BOOL profileHidden;
+ (id)descriptor;
@end
