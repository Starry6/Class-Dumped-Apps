@interface TVLPlayerItemAccessLogPreferencesSwitchEvent : TVLPlayerItemLogEvent
@property (nonatomic) TVLPlayerItemPreferences fromPreferences;
@property (nonatomic) TVLPlayerItemPreferences toPreferences;
- (id)fromPreferences;
- (void)preferencesDidSwitchFrom:to:;
- (id)toPreferences;
@end
