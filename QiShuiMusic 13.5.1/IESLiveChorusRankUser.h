@interface IESLiveChorusRankUser : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString nickname;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) IESLiveChorusRankUser_FollowInfo followInfo;
@property (nonatomic) BOOL hasFollowInfo;
@property (nonatomic) IESLiveChorusRankUser_OwnRoom ownRoom;
@property (nonatomic) BOOL hasOwnRoom;
@property (nonatomic) NSInteger secret;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString idStr;
+ (id)descriptor;
@end
