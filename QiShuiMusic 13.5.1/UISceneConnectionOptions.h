@interface UISceneConnectionOptions : NSObject
@property (nonatomic) NSDictionary _launchOptionsDictionary;
@property (nonatomic) FBSScene _fbsScene;
@property (nonatomic) FBSSceneSpecification _specification;
@property (nonatomic) NSSet URLContexts;
@property (nonatomic) NSString sourceApplication;
@property (nonatomic) NSString handoffUserActivityType;
@property (nonatomic) NSSet userActivities;
@property (nonatomic) UNNotificationResponse notificationResponse;
@property (nonatomic) UIApplicationShortcutItem shortcutItem;
@property (nonatomic) CKShareMetadata cloudKitShareMetadata;
- (id)cloudKitShareMetadata;
- (id)notificationResponse;
- (id)handoffUserActivityType;
- (id)shortcutItem;
- (id)sourceApplication;
- (id)userActivities;
- (id)_fbsScene;
- (id)_launchOptionsDictionary;
- (void).cxx_destruct;
- (id)_initWithConnectionOptionsContext:fbsScene:specification:;
- (id)_specification;
- (id)URLContexts;
- (id)description;
@end
