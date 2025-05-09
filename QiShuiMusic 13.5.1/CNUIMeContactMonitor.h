@interface CNUIMeContactMonitor : NSObject
@property (nonatomic) <CNMeContactComparisonStrategy> strategy;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) NSNotificationCenter notificationCenter;
@property (nonatomic) <CNReaderWriterScheduler> lock;
@property (nonatomic) <CNCancelable> meNotificationToken;
@property (nonatomic) NSArray meContactIdentifiers;
- (void)setContactStore:;
- (id)init;
- (id)strategy;
- (void)dealloc;
- (void)setNotificationCenter:;
- (id)notificationCenter;
- (id)lock;
- (void)startMonitoring;
- (BOOL)isMeContact:;
- (void).cxx_destruct;
- (id)contactStore;
- (void)setStrategy:;
- (id)initWithContactStore:;
- (void)setLock:;
- (void)meChanged:;
- (id)initWithComparisonStrategy:;
- (id)initWithComparisonStrategy:contactStore:;
- (id)initWithComparisonStrategy:contactStore:notificationCenter:schedulerProvider:;
- (id)meContactIdentifiers;
- (id)meNotificationToken;
- (void)setMeNotificationToken:;
+ (id)unifiedMeContactMonitor;
+ (id)meContactMonitor;
+ (id)makeMeContactMonitor;
+ (id)makeUnifiedMeContactMonitor;
@end
