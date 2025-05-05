@interface SBSWebClipService : NSObject
+ (void)launchWebClipWithIdentifier:;
+ (void)launchWebClipWithIdentifier:origin:;
+ (void)updateWebClipPropertiesWithIdentifier:;
+ (id)_setupAndActivateServiceConnection;
@end
