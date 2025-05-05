@interface IESLiveSaaSPBUserPrivilegeChangeMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger userPrivilegeType;
@property (nonatomic) NSString userOpenId;
@property (nonatomic) IESLiveSaaSPBImage avatarBorder;
@property (nonatomic) BOOL hasAvatarBorder;
@property (nonatomic) IESLiveSaaSPBImage thumbAvatarBorder;
@property (nonatomic) BOOL hasThumbAvatarBorder;
+ (id)descriptor;
@end
