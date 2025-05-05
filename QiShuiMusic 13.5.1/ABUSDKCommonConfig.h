@interface ABUSDKCommonConfig : NSObject
@property (nonatomic) NSInteger eventBatchSize;
@property (nonatomic) q eventSendType;
@property (nonatomic) q eventRoutineInterval;
@property (nonatomic) q preFetchCount;
@property (nonatomic) double tncInterval;
@property (nonatomic) Q dynamicAdapterType;
@property (nonatomic) Q applogCypher;
@property (nonatomic) Q rewardCypher;
@property (nonatomic) Q configCypher;
@property (nonatomic) Q exchangeCypher;
@property (nonatomic) double rvStartTime;
- (unsigned long long)applogCypher;
- (unsigned long long)configCypher;
- (unsigned long long)dynamicAdapterType;
- (int)eventBatchSize;
- (long long)eventRoutineInterval;
- (long long)eventSendType;
- (unsigned long long)exchangeCypher;
- (long long)preFetchCount;
- (unsigned long long)rewardCypher;
- (double)rvStartTime;
- (void)setDynamicAdapterType:;
- (double)tncInterval;
- (id)initWithDict:;
@end
