@interface TSIntervalTimeLineFilter : TSTimeLineFilter
- (void)resetFilter;
- (void)changeToNewFilterSize:;
- (void).cxx_destruct;
- (void)addTimestamps:;
- (id)rateRatio;
- (void)getAnchors:andRateRatio:;
- (unsigned long long)domainATimeFromDomainBTime:;
- (unsigned long long)domainAIntervalFromDomainBInterval:;
- (unsigned long long)domainBTimeFromDomainATime:;
- (unsigned long long)domainBIntervalFromDomainAInterval:;
- (BOOL)canConvertTime;
- (id)initWithExpectedDomainAInterval:expectedDomainBInterval:filterSize:;
- (void)resetFilterWithNewExpectedDomainAInterval:expectedDomainBInterval:;
- (void)resetFilterWithNewExpectedDomainAInterval:expectedDomainBInterval:multiIntervalCount:;
@end
