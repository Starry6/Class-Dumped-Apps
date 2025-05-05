@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite
@property (nonatomic) BOOL shouldTearDown;
@property (nonatomic) IMCloudKitHookTestSingleton cloudKitHooks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUp;
- (id)init;
- (void)tearDown;
- (void).cxx_destruct;
- (void)cloudKitEventNotificationManager:syncProgressDidUpdate:;
- (id)cloudKitHooks;
- (void)setCloudKitHooks:;
- (BOOL)shouldTearDown;
- (void)setShouldTearDown:;
+ (void)runTestsIfNeeded;
@end
