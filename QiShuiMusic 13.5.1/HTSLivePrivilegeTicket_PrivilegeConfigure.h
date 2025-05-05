@interface HTSLivePrivilegeTicket_PrivilegeConfigure : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger entityType;
@property (nonatomic) q privilegeTabKey;
@property (nonatomic) NSInteger privilegeType;
+ (id)descriptor;
@end
