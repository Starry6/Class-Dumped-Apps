@interface IMLocationManagerUtils : NSObject
- (void)sendCurrentLocationMessageWithChat:withLocationManager:withSourceApplicationIdentifier:foregroundAssertionForBundleIdentifier:completion:;
+ (id)sharedInstance;
@end
