@interface SSMetricsController : NSObject
@property (nonatomic) BOOL flushTimerEnabled;
- (id)_connection;
- (void)setFlushTimerEnabled:;
- (BOOL)isDisabled;
- (id)init;
- (void)_applicationWillEnterForeground;
- (void)dealloc;
- (id)serialQueue;
- (id)configuration;
- (void)flushUnreportedEventsWithCompletionHandler:;
- (void).cxx_destruct;
- (id)pingURLs;
- (void)setGlobalConfiguration:;
- (void)_serialQueueInsertEvents:withCompletionHandler:;
- (id)_userType;
- (id)_cookieValuesForConfiguration:;
- (void)_handleFlushTimer;
- (void)_flushUnreportedEventsIfEnabled;
- (void)_setupFlushTimer;
- (void)insertEvent:withCompletionHandler:;
- (void)insertEvents:withCompletionHandler:;
- (id)locationWithPosition:type:fieldData:;
- (void)recordAnalyticsForMetricsDialogEvent:withTopic:;
- (void)setPageConfiguration:;
- (void)_enumerateFieldValuesWithMap:fieldData:block:;
- (id)_valueForField:withFieldData:;
- (BOOL)isFlushTimerEnabled;
@end
