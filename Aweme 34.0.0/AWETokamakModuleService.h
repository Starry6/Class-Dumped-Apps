@interface AWETokamakModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)simulateExceptionWithConfig:;
- (Class)tokamakLogUploaderClass;
- (void)onLastLaunchCrash:;
- (void)startANR;
- (void)launchDidAppear;
- (void)cleanStorage;
@end
