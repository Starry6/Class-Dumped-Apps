@interface ABUAdLoadErrorCodePeriodHistory : ABUAdHistory
@property (nonatomic) q period;
@property (nonatomic) NSMutableDictionary histories;
@property (nonatomic) ABUAdLoadErrorCodePeriodRule rule;
- (void)addHistoryWithAdnName:andMediationRit:andMediaRit:andErrorCode:;
- (BOOL)isValidWithAdnName:andMediationRit:andMediaRit:;
- (id)keyOfHistoryWithAdnName:andMediationRit:andMediaRit:;
- (void)updateHistoryWithKey:;
- (id)rule;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)period;
- (void)setRule:;
- (id)initWithRule:;
- (void)setPeriod:;
- (id)histories;
- (void)setHistories:;
@end
