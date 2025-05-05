@interface IESLiveSaaSPBUser_XiguaParams : GPBMessage
@property (nonatomic) NSString userAuthInfo;
@property (nonatomic) q ugcPublishMediaId;
@property (nonatomic) q mediaId;
@property (nonatomic) NSString authorDesc;
@property (nonatomic) NSString description_p;
@property (nonatomic) BOOL userVerified;
@property (nonatomic) IESLiveSaaSPBUser_XiguaParams_UserExtendInfo userExtendInfo;
@property (nonatomic) BOOL hasUserExtendInfo;
@property (nonatomic) q xiguaUid;
@property (nonatomic) NSString nickName;
@property (nonatomic) IESLiveSaaSPBImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) IESLiveSaaSPBImage avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (nonatomic) IESLiveSaaSPBImage avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
+ (id)descriptor;
@end
