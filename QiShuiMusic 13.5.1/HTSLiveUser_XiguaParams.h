@interface HTSLiveUser_XiguaParams : IESLivePBBaseMessage
@property (nonatomic) NSString userAuthInfo;
@property (nonatomic) q ugcPublishMediaId;
@property (nonatomic) q mediaId;
@property (nonatomic) NSString authorDesc;
@property (nonatomic) NSString description_p;
@property (nonatomic) BOOL userVerified;
@property (nonatomic) HTSLiveUser_XiguaParams_UserExtendInfo userExtendInfo;
@property (nonatomic) BOOL hasUserExtendInfo;
@property (nonatomic) q xiguaUid;
@property (nonatomic) NSString nickName;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) HTSLiveImage avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (nonatomic) HTSLiveImage avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
+ (id)descriptor;
@end
