@interface MTFrameworkEnvironment : NSObject
@property (nonatomic) NSString localDataPath;
- (BOOL)isInternalBuild;
- (id)valueForEntitlement:;
- (id)date;
- (void).cxx_destruct;
- (id)dateOfBirthComponents;
- (id)secretStore;
- (void)setLocalDataPath:;
- (id)localDataPath;
- (BOOL)useCloudKitSandbox;
- (id)hostProcessBundleIdentifier;
- (id)metricsKitBundleIdentifier;
+ (void)withEnvironment:execute:;
+ (id)sharedEnvironment;
+ (void)setSharedEnvironment:;
@end
