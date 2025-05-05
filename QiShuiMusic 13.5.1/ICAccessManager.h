@interface ICAccessManager : NSObject
+ (id)bundleIdentifiersAccessingExternalMediaDevices;
+ (void)revokeBundleIdentifierAccessingExternalMediaDevices:;
+ (void)updateBundleIdentifierAccessingExternalMediaDevices:withStatus:;
+ (id)bundleIdentifiersAccessingExternalMediaDevicesWithStatus;
+ (void)addBundleIdentifierAccessingExternalMediaDevices:;
+ (BOOL)validateBundleIdentifierAccessingExternalMediaDevices:;
@end
