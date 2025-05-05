@interface IESSaaSTIMDatabaseTracker : NSObject
@property (nonatomic) <IESSaaSTIMAppDoubleTrackerManagerProtocol> tracker;
@property (nonatomic) NSDictionary ftcValues;
@property (nonatomic) NSInteger remoteDefaultFTCValue;
- (id)ftcValues;
- (int)remoteDefaultFTCValue;
- (void)setFtcValues:;
- (void)setRemoteDefaultFTCValue:;
- (void)setTracker:;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
+ (void)databaseRepairStatus:;
+ (void)databaseSetup:;
+ (BOOL)enableTrace;
+ (unsigned long long)performanceTraceBegin;
+ (float)performanceTraceEnd:;
+ (void)traceCmdTag:timeBegin:;
+ (void)traceCmdTag:timeBegin:count:;
+ (void)traceCmdTag:timeBegin:status:;
+ (void)traceCmdTag:timeBegin:status:count:;
+ (id)trackerQueue;
+ (id)sharedInstance;
@end
