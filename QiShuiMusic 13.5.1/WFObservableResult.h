@interface WFObservableResult : NSObject
@property (nonatomic) # valueType;
@property (nonatomic) {CGSize=dd} glyphSize;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> observerNotificationQueue;
@property (nonatomic) NSHashTable observers;
@property (nonatomic) BOOL observingDistributedNotifications;
- (void)dealloc;
- (id)serialQueue;
- (void)stopConnection;
- (void).cxx_destruct;
- (Class)valueType;
- (id)observers;
- (id)glyphSize;
- (void)addResultObserver:;
- (id)initWithValueType:glyphSize:;
- (void)handleChangeNotification:;
- (void)databaseDidChange:;
- (void)removeResultObserver:;
- (void)startConnectionIfNecessary;
- (id)observerNotificationQueue;
- (BOOL)observingDistributedNotifications;
- (void)setObservingDistributedNotifications:;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:glyphSize:completion:;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:glyphSize:;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:glyphSize:roundedIcon:synchronously:completion:;
@end
