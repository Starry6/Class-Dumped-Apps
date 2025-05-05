@interface SFVoiceSearchManager : NSObject
@property (nonatomic) q availability;
@property (nonatomic) BOOL liveCompletionList;
@property (nonatomic) NSArray queryItems;
- (id)queryItems;
- (id)init;
- (void)_updateDictationAvailability;
- (long long)availability;
- (long long)_voiceSearchAvailability;
- (BOOL)liveCompletionList;
- (id)_kfed;
- (BOOL)presentDictationDiscoveryAlertIfNeeded;
+ (id)sharedManager;
@end
