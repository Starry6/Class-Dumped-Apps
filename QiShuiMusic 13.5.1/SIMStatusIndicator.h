@interface SIMStatusIndicator : NSObject
@property (nonatomic) CoreTelephonyClient coreTelephonyClient;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) ^? callback;
@property (nonatomic) ^v applicationContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)callback;
- (void)createConnection;
- (id)coreTelephonyClient;
- (void)setCoreTelephonyClient:;
- (void)setCallback:;
- (id)init;
- (void)setApplicationContext:;
- (id)applicationContext;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)simStatusDidChange:status:;
@end
