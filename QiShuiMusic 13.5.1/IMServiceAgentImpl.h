@interface IMServiceAgentImpl : IMServiceAgent
- (void)setupComplete;
- (id)init;
- (void)dealloc;
- (id)notificationCenter;
- (id)serviceWithName:;
- (void)_daemonDisconnected:;
- (void)vcCapabilitiesChanged:;
- (unsigned long long)vcCapabilities;
- (void)_statusImageAppearanceChanged:;
- (void)_daemonConnected:;
- (void)launchIfNecessary;
- (void)_customMessagesChanged:;
- (id)myAvailableMessages;
- (id)myAwayMessages;
- (void)setMyAvailableMessages:;
- (void)setMyAwayMessages:;
+ (id)imageURLForStatus:;
+ (id)notificationCenter;
+ (id)imageNameForStatus:;
+ (void)forgetStatusImageAppearance;
+ (void)_determineStatusImageAppearance;
+ (id)sharedAgent;
+ (void)_statusImageAppearanceChanged:;
@end
