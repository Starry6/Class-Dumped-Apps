@interface IDSCurrentServerTime : NSObject
@property (nonatomic) <IDSCurrentServerTimeProvider> serverTimeProvider;
@property (nonatomic) IDSCurrentServerTimePair timePair;
@property (nonatomic) CUTDeferredTaskQueue refreshServerTimeTask;
- (void)setServerTimeProvider:;
- (id)serverTimeProvider;
- (id)currentServerTimeDate;
- (id)timePair;
- (void)_storeInitialServerTimeIfNeeded;
- (void)setTimePair:;
- (id)initWithServerTimeProvider:;
- (id)refreshServerTimeTask;
- (void).cxx_destruct;
- (void)_refreshServerTime;
- (double)currentServerTimeInterval;
- (double)_refreshTimeInterval;
- (void)_storeCurrentTime;
+ (id)sharedInstance;
@end
