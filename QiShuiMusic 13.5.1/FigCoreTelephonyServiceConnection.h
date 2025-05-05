@interface FigCoreTelephonyServiceConnection : NSObject
@property (nonatomic) {OpaqueFigCoreTelephonyStatus=C} currentStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_setupConnection;
- (void)deregisterListener:;
- (id)init;
- (void)dealloc;
- (void)internetDataStatusBasic:;
- (id)currentStatus;
- (int)registerListener:callback:queue:;
- (void)_teardownConnection;
- (void)_handleCTNotification:notificationInfo:;
- (void)processDataStatusBasic:;
+ (id)sharedInstance;
@end
