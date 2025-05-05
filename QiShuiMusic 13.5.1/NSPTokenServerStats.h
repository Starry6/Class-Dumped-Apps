@interface NSPTokenServerStats : NSPProxyAnalytics
@property (nonatomic) NSString tierType;
@property (nonatomic) NSString tokenServerAddress;
- (void)setTierType:;
- (id)eventName;
- (void).cxx_destruct;
- (id)analyticsDict;
- (id)tierType;
- (id)tokenServerAddress;
- (void)setTokenServerAddress:;
@end
