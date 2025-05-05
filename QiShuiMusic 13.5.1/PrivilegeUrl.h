@interface PrivilegeUrl : IESLivePBBaseMessage
@property (nonatomic) NSString privilegePanelSchema;
@property (nonatomic) NSString privilegeCardSchema;
+ (id)descriptor;
@end
