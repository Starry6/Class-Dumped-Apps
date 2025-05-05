@interface FBSystemShellInitializationOptions : NSObject
@property (nonatomic) BOOL initializeReadyForInteraction;
@property (nonatomic) BOOL resetDarkBootState;
@property (nonatomic) BOOL shouldWaitForMigrator;
@property (nonatomic) double systemSleepInterval;
@property (nonatomic) @? registerAdditionalServicesBlock;
@property (nonatomic) BOOL initializeDisplayManager;
@property (nonatomic) NSString independentWatchdogPortName;
- (id)_initWithOptions:;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)initializeReadyForInteraction;
- (BOOL)resetDarkBootState;
- (BOOL)shouldWaitForMigrator;
- (double)systemSleepInterval;
- (id)registerAdditionalServicesBlock;
- (id)independentWatchdogPortName;
- (BOOL)initializeDisplayManager;
@end
