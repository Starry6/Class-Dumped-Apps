@interface DMFFetchAvailableOSUpdatesRequest : DMFTaskRequest
@property (nonatomic) NSString productVersion;
@property (nonatomic) BOOL useDelay;
- (void)setProductVersion:;
- (id)productVersion;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)useDelay;
- (void)setUseDelay:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
@end
