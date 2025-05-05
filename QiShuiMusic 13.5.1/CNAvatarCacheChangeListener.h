@interface CNAvatarCacheChangeListener : NSObject
@property (nonatomic) CNContactStore store;
@property (nonatomic) <CNAvatarCacheChangeListenerDelegate> delegate;
@property (nonatomic) NSNotificationCenter notificationCenter;
@property (nonatomic) <CNScheduler> rawPreprocessor;
@property (nonatomic) <CNScheduler> preprocessor;
@property (nonatomic) NSData currentHistoryToken;
- (id)currentHistoryToken;
- (id)init;
- (id)notificationCenter;
- (void)start;
- (void)stop;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (id)store;
- (void)setCurrentHistoryToken:;
- (id)preprocessor;
- (id)initWithContactStore:delegate:;
- (void)databaseChanged:;
- (void)loadCurrentHistoryToken;
- (id)makeDatabaseChangedTask;
- (id)makeAnalysisTask;
- (id)makeReportingTaskWithIdentifiers:;
- (id)rawPreprocessor;
@end
