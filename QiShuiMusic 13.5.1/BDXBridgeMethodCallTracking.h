@interface BDXBridgeMethodCallTracking : NSObject
@property (nonatomic) BDXBridgeAuthModelV2MethodCallLimit callLimit;
@property (nonatomic) Q callCount;
@property (nonatomic) Q callHistoryLength;
@property (nonatomic) NSMutableArray callHistory;
@property (nonatomic) Q frequency;
- (void)setCallHistory:;
- (unsigned long long)callHistoryLength;
- (id)callLimit;
- (BOOL)isFrequencyBlock;
- (void)setCallHistoryLength:;
- (void)setCallLimit:;
- (id)init;
- (unsigned long long)frequency;
- (void)setCallCount:;
- (void)setFrequency:;
- (unsigned long long)callCount;
- (void).cxx_destruct;
- (id)callHistory;
- (void)tick;
@end
