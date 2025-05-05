@interface IESLiveSaaSPBCommentaryRoomInfo : GPBMessage
@property (nonatomic) NSString openId;
@property (nonatomic) IESLiveSaaSPBImage avatar;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString title;
@property (nonatomic) q roomId;
+ (id)descriptor;
@end
