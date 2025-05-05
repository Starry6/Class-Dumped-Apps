@interface IESLiveSaaSPBAdminInfo : GPBMessage
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) IESLiveSaaSPBImage adminBadge;
@property (nonatomic) BOOL hasAdminBadge;
+ (id)descriptor;
@end
