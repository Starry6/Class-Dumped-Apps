@interface CNUIContactsAuthorizationController : NSObject
@property (nonatomic) CNUIContactsAuthorizationStore store;
@property (nonatomic) CNUICoreContactsAuthorizationModel model;
@property (nonatomic) NSArray bundleIdentifiersOfAppsWithContactsAccessInfo;
@property (nonatomic) BOOL foundAppsWithContactsAccessInfo;
@property (nonatomic) <CNUIContactsAuthorizationControllerDelegate> delegate;
- (id)model;
- (id)init;
- (void)setModel:;
- (void)setDelegate:;
- (id)initWithBundleIdentifier:;
- (id)delegate;
- (void).cxx_destruct;
- (id)store;
- (id)createModel;
- (void)lazilyLoadIconsForRemoteItems;
- (void)saveModel;
- (BOOL)foundAppsWithContactsAccessInfo;
- (id)bundleIdentifiersOfAppsWithContactsAccessInfo;
- (id)authorizationLevelOfAppWithBundleIdentifier:;
- (id)nameOfAppWithBundleIdentifier:;
- (id)iconOfAppWithBundleIdentifier:;
- (void)setAuthorizationLevel:ofAppWithBundleIdentifier:;
+ (id)authorizationPaneFooterLabel;
+ (id)authorizationPaneHeaderLabel;
+ (id)authorizationPaneContactsAppLabel;
+ (id)validAuthorizationValues;
+ (id)validAuthorizationLabelsForValues;
@end
