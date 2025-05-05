@interface ICMusicAccountNotificationsSettingsManager : NSObject
- (id)cachedAccountNotificationsShowInLibrarySwitch;
- (id)_getSwitchesDependingOnSubscriptionStatus:withResponse:togglingSwitchesToValue:;
- (id)storeRequestContext;
- (void)getAccountNotificationsWithCompletionHandler:;
- (void)setCachedAccountNotificationsShowInLibraryEnabled:;
- (void)setAccountNotificationsArtistContentFeature:withCompletionHandler:;
+ (id)sharedManager;
@end
