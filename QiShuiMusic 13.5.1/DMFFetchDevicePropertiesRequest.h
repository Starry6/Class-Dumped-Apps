@interface DMFFetchDevicePropertiesRequest : DMFTaskRequest
@property (nonatomic) NSArray propertyKeys;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setPropertyKeys:;
- (id)propertyKeys;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
+ (id)currentDevicePropertyKeys;
+ (id)devicePropertyKeysForPlatform:;
@end
