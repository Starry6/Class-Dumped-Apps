@interface DMFScheduleOSUpdateRequest : DMFTaskRequest
@property (nonatomic) Q action;
@property (nonatomic) NSString productKey;
@property (nonatomic) NSString productVersion;
@property (nonatomic) BOOL useDelay;
- (void)setProductVersion:;
- (id)productVersion;
- (id)init;
- (unsigned long long)action;
- (id)initWithCoder:;
- (void)setAction:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)useDelay;
- (void)setUseDelay:;
- (id)productKey;
- (void)setProductKey:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
+ (BOOL)_action:fromString:;
+ (id)_descriptionForAction:;
@end
