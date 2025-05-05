@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest
@property (nonatomic) NSString destinationName;
@property (nonatomic) NSString destinationDeviceID;
@property (nonatomic) NSString password;
@property (nonatomic) BOOL force;
@property (nonatomic) double scanWaitInterval;
- (void)setPassword:;
- (id)password;
- (BOOL)force;
- (void)setForce:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)destinationName;
- (void)setDestinationName:;
- (id)destinationDeviceID;
- (void)setDestinationDeviceID:;
- (double)scanWaitInterval;
- (void)setScanWaitInterval:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
@end
