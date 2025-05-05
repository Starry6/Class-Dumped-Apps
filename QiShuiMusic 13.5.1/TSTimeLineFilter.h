@interface TSTimeLineFilter : NSObject
@property (nonatomic) {?=QQ} rateRatio;
@property (nonatomic) BOOL canConvertTime;
- (void)resetFilter;
- (void)addTimestamps:;
- (id)rateRatio;
- (void)getAnchors:andRateRatio:;
- (unsigned long long)domainATimeFromDomainBTime:;
- (unsigned long long)domainAIntervalFromDomainBInterval:;
- (unsigned long long)domainBTimeFromDomainATime:;
- (unsigned long long)domainBIntervalFromDomainAInterval:;
- (BOOL)canConvertTime;
@end
