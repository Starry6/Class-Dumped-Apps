@interface CLGyroCalibrationDatabaseAdapter : CLNotifierServiceAdapter
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)endService;
- (int)syncgetNumTemperatures;
- (BOOL)syncgetSupportsMiniCalibration;
- (BOOL)syncgetGyroStatsWithBias:slope:l2Error:isDynamic:deltaBias:deltaSlope:deltaError:isDeltaDynamic:;
- (id)adaptee;
- (BOOL)syncgetDoSync:;
- (int)syncgetNonFactoryRoundCount;
- (BOOL)syncgetInsertWithBias:variance:temperature:timestamp:;
- (void)beginService;
- (void)startFactoryGYTT;
- (void)dumpDatabase:onCompletion:;
- (double)syncgetLastMiniCalibration;
- (int)syncgetMaxDynamicTemperature;
- (void)doAsync:withReply:;
- (BOOL)syncgetBiasFit:;
- (BOOL)syncgetWipeDatabase;
- (void)doAsync:;
+ (BOOL)isSupported;
+ (void)becameFatallyBlocked:index:;
+ (void)performSyncOnSilo:invoker:;
+ (id)getSilo;
@end
