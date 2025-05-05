@interface PAAccessLoggerState : NSObject
@property (nonatomic) BOOL loggingEnabled;
@property (nonatomic) q topAccessIntervalSlot;
@property (nonatomic) NSDictionary ongoingAccessIntervals;
@property (nonatomic) NSCache negativeAccessCache;
@property (nonatomic) NSDictionary slotByAccessForOngoingAccessInterval;
- (id)init;
- (id)takeOngoingAccessIntervalStateForSlot:;
- (id)lookupCurrentAccessForSlot:;
- (id)slotByAccessForOngoingAccessInterval;
- (id)ongoingAccessIntervals;
- (void)setTopAccessIntervalSlot:;
- (void)setOngoingAccessIntervalState:forSlot:;
- (id)negativeAccessCache;
- (void)setLoggingEnabled:;
- (void).cxx_destruct;
- (BOOL)loggingEnabled;
- (id)takeOngoingAccessIntervalStateForAccess:;
- (long long)topAccessIntervalSlot;
@end
