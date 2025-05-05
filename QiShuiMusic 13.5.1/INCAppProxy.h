@interface INCAppProxy : NSObject
@property (nonatomic) INCExtensionConnection _connection;
- (id)_connection;
- (void)launchAppInBackground:completionHandler:;
- (void).cxx_destruct;
- (void)launchAppInBackground:restrictAppsToCarPlay:userActivityIdentifier:completionHandler:;
- (id)_initWithConnection:;
+ (BOOL)shouldLaunchAppInBackgroundWithIntent:intentResponse:;
@end
