@interface ACXApplicationStatus : NSObject
@property (nonatomic) Q installStatus;
@property (nonatomic) NSError lastInstallationError;
@property (nonatomic) NSString uniqueInstallID;
@property (nonatomic) q watchKitCompatibility;
@property (nonatomic) Q architectureCompatibility;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (unsigned long long)installStatus;
- (void)setInstallStatus:;
- (id)uniqueInstallID;
- (void)setUniqueInstallID:;
- (void)setInstallStatusWithGizmoStatus:;
- (id)lastInstallationError;
- (void)setLastInstallationError:;
- (long long)watchKitCompatibility;
- (void)setWatchKitCompatibility:;
- (unsigned long long)architectureCompatibility;
- (void)setArchitectureCompatibility:;
+ (BOOL)supportsSecureCoding;
@end
