@interface NSPOutageDurationStats : NSPProxyAnalytics
@property (nonatomic) Q outageType;
@property (nonatomic) Q outageDurationSec;
- (id)eventName;
- (id)analyticsDict;
- (id)outageTypeToString;
- (unsigned long long)outageType;
- (void)setOutageType:;
- (unsigned long long)outageDurationSec;
- (void)setOutageDurationSec:;
@end
