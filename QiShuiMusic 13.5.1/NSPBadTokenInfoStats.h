@interface NSPBadTokenInfoStats : NSPProxyAnalytics
@property (nonatomic) NSString tierType;
@property (nonatomic) NSString tokenProxy;
@property (nonatomic) Q configAgeHours;
@property (nonatomic) NSString configTag;
- (void)setTierType:;
- (id)eventName;
- (void).cxx_destruct;
- (id)analyticsDict;
- (id)tierType;
- (id)tokenProxy;
- (void)setTokenProxy:;
- (unsigned long long)configAgeHours;
- (void)setConfigAgeHours:;
- (id)configTag;
- (void)setConfigTag:;
@end
