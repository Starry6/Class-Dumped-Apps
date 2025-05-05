@interface SBSRemoteContentDefinition : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSString viewControllerClassName;
@property (nonatomic) NSObject<OS_xpc_object> xpcEndpoint;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)encodeWithXPCDictionary:;
- (id)userInfo;
- (id)serviceName;
- (id)succinctDescriptionBuilder;
- (id)initWithXPCDictionary:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)viewControllerClassName;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
- (id)initWithServiceName:viewControllerClassName:;
- (void)setXpcEndpoint:;
- (id)initWithServiceName:viewControllerClassName:xpcEndpoint:userInfo:;
- (id)xpcEndpoint;
@end
