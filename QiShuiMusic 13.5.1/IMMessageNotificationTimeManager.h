@interface IMMessageNotificationTimeManager : NSObject
@property (nonatomic) NSMutableDictionary chatsStartTimeDictionary;
@property (nonatomic) NSString latestIDSTokenURI;
@property (nonatomic) BKSApplicationStateMonitor appStateMonitor;
- (id)init;
- (void)dealloc;
- (id)appStateMonitor;
- (void)setAppStateMonitor:;
- (void)tearDownSessionForChatIdentifier:;
- (void)setDate:forChatIdentifier:;
- (BOOL)_isToneToggleSwitchOn;
- (long long)_getTimeWindowOverride;
- (long long)_getToneTimeWindow;
- (BOOL)_shouldSendNotificationForChatIdentifier:;
- (void)setLatestNotificationIDSTokenURI:;
- (void)sendNotificationMessageIfNeededForIncomingMessageFromChatIdentifier:;
- (void)acquireAssertionToUnsuspendProcess;
- (id)chatsStartTimeDictionary;
- (void)setChatsStartTimeDictionary:;
- (id)latestIDSTokenURI;
- (void)setLatestIDSTokenURI:;
+ (id)sharedInstance;
@end
