@interface SFSystemAlert : NSObject
@property (nonatomic) @? completionBlock;
- (void)cancel;
- (void)dealloc;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
- (id)initWithTitle:message:affirmativeButtonTitle:negativeButtonTitle:;
- (id)initWithTitle:message:affirmativeButtonTitle:negativeButtonTitle:alternateButtonTitle:;
- (void)scheduleWithCompletionBlock:;
+ (id)_displayNameForBundleID:;
+ (id)webAuthenticationAlertForDomain:appBundleID:;
+ (id)readingListAlertForDomain:appBundleID:;
+ (id)searchEngineSettingAlert;
+ (id)sharedTabGroupsManateeAlert;
@end
