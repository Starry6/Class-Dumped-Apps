@interface GroupUser : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString nickname;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) GroupUser_OwnRoom ownRoom;
@property (nonatomic) BOOL hasOwnRoom;
@property (nonatomic) NSInteger secret;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString idStr;
@property (nonatomic) NSString text;
+ (id)descriptor;
@end
