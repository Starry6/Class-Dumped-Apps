@interface HTSLiveSelfDisciplineUserBase : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString nickname;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) HTSLiveSelfDisciplineUserBase_FollowInfo followInfo;
@property (nonatomic) BOOL hasFollowInfo;
@property (nonatomic) NSInteger secret;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSInteger mysteryMan;
+ (id)descriptor;
@end
