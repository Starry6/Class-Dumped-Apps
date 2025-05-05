@interface SBSRemoteAlertConfigurationContext : NSObject
@property (nonatomic) NSDictionary legacyAlertOptions;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSObject<OS_xpc_object> xpcEndpoint;
@property (nonatomic) NSSet actions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (void)setActions:;
- (id)userInfo;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (id)actions;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (void)setXpcEndpoint:;
- (id)xpcEndpoint;
- (id)legacyAlertOptions;
+ (BOOL)supportsSecureCoding;
+ (id)configurationContextWithLegacyAlertOptions:;
@end
