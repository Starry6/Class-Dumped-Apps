@interface BXStrategySettingsOC : NSObject
@property (nonatomic) NSInteger mUpdateInterval;
@property (nonatomic) BOOL mOpenRealTimeDecision;
@property (nonatomic) NSInteger mTryCount;
@property (nonatomic) NSString mAccessKey;
@property (nonatomic) NSString mSecretKey;
@property (nonatomic) NSInteger mByteBenchId;
@property (nonatomic) NSDictionary mClientInfoDic;
- (id)mAccessKey;
- (int)mByteBenchId;
- (id)mClientInfoDic;
- (BOOL)mOpenRealTimeDecision;
- (id)mSecretKey;
- (int)mTryCount;
- (void)setMAccessKey:;
- (void)setMByteBenchId:;
- (void)setMClientInfoDic:;
- (void)setMOpenRealTimeDecision:;
- (void)setMSecretKey:;
- (void)setMTryCount:;
- (void)setMUpdateInterval:;
- (void).cxx_destruct;
- (int)mUpdateInterval;
@end
