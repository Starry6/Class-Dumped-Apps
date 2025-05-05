@interface VCCTServiceMonitor : NSObject
@property (nonatomic) NSNumber inHomeCountry;
@property (nonatomic) CTDataStatus dataStatus;
@property (nonatomic) CTDataConnectionStatus connectionStatus;
@property (nonatomic) CTSignalStrengthInfo signalStrength;
@property (nonatomic) BOOL supportsCellular;
@property (nonatomic) ^{os_unfair_lock_s=I} statusLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)signalStrength;
- (void)internetConnectionStateChanged:;
- (void)signalStrengthChanged:info:;
- (id)getCurrentDataSubscriptionContext;
- (id)dataStatus;
- (void)dataStatus:dataStatusInfo:;
- (id)init;
- (void)dealloc;
- (BOOL)supportsCellular;
- (id)inHomeCountry;
- (id)statusLock;
- (id)connectionStatus;
+ (id)sharedInstance;
@end
