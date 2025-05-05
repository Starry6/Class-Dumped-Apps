@interface ICDeviceAccessManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> deviceAccessQueue;
- (id)init;
- (void)dealloc;
- (id)bundleIdentifiersAccessingExternalCameras;
- (void)revokeApplicationWithBundleIdentifier:;
- (void)updateApplicationWithBundleIdentifier:withStatus:;
- (id)bundleIdentifiersAccessingExternalCamerasWithStatus;
- (void)addApplicationWithBundleIdentifier:whitelist:;
- (BOOL)validateBundleIdentifierInstalled:control:;
- (BOOL)applicationWithBundleIdentifierHasAccess:enabled:;
- (BOOL)internalApplicationWithBundleIdentifierHasAccess:;
- (BOOL)validateBundleIdentifier:withNotification:;
- (void)displayAlertForApplication:notificationDict:completionBlock:;
- (id)bundleIdentifiersControllingExternalCameras;
- (void)revokeControlApplicationWithBundleIdentifier:;
- (void)addControlApplicationWithBundleIdentifier:whitelisted:;
- (BOOL)controlApplicationWithBundleIdentifierHasAccess:;
- (BOOL)validateControlApplicationBundleIdentifier:withNotification:;
- (id)deviceAccessQueue;
- (void)setDeviceAccessQueue:;
+ (id)sharedAccessManager;
@end
