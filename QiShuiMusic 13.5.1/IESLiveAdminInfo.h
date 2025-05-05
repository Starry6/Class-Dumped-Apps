@interface IESLiveAdminInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) HTSLiveImage adminBadge;
@property (nonatomic) BOOL hasAdminBadge;
+ (id)descriptor;
@end
