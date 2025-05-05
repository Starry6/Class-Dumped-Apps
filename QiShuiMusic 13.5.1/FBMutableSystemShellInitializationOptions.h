@interface FBMutableSystemShellInitializationOptions : FBSystemShellInitializationOptions
@property (nonatomic) BOOL initializeReadyForInteraction;
@property (nonatomic) BOOL resetDarkBootState;
@property (nonatomic) BOOL shouldWaitForMigrator;
@property (nonatomic) double systemSleepInterval;
@property (nonatomic) @? registerAdditionalServicesBlock;
@property (nonatomic) BOOL initializeDisplayManager;
@property (nonatomic) NSString independentWatchdogPortName;
- (void)setRegisterAdditionalServicesBlock:;
- (void)setInitializeReadyForInteraction:;
- (void)setInitializeDisplayManager:;
- (void)setShouldWaitForMigrator:;
- (void)setSystemSleepInterval:;
- (void)setResetDarkBootState:;
- (void)setIndependentWatchdogPortName:;
- (id)copyWithZone:;
@end
