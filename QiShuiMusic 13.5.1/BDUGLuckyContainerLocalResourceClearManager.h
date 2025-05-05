@interface BDUGLuckyContainerLocalResourceClearManager : NSObject
- (id)__removeDataFromSettings;
- (void)__removeLocalDatasWithRemoveData:;
- (void)__triggerClearLocalStorageWithKey:localVersionKey:removeVersion:;
- (void)settingsDidUpdateAction;
- (void)setupInitialization;
+ (void)initializeResourceClearProbe;
+ (id)sharedInstance;
@end
