@interface MAAutoAssetPushNotificationHistory : NSObject
@property (nonatomic) NSArray notificationHistory;
- (id)init;
- (void).cxx_destruct;
- (id)notificationHistory;
- (id)_historyURL;
- (BOOL)_loadHistoryWithError:;
- (BOOL)addNotificationsToHistory:withError:;
- (BOOL)clearHistoryWithError:;
- (void)setNotificationHistory:;
+ (id)sharedInstance;
@end
