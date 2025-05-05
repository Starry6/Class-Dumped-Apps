@interface HTSLiveComment_User : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) q shortId;
@property (nonatomic) NSString nickname;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) HTSLiveUser_AuthenticationInfo authenticationInfo;
@property (nonatomic) BOOL hasAuthenticationInfo;
+ (id)descriptor;
@end
