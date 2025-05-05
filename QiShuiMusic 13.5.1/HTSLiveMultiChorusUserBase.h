@interface HTSLiveMultiChorusUserBase : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) NSInteger secret;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSInteger mysteryMan;
+ (id)descriptor;
@end
