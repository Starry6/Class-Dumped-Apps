@interface CSReceiverPreferences : CoreSpotlightPreferences
@property (nonatomic) NSDictionary dictionary;
- (id)dictionary;
- (id)init;
- (void)enableBundleIdentifier:;
- (void)disableBundleIdentifier:;
@end
