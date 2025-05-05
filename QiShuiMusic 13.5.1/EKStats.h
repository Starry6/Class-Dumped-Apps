@interface EKStats : NSObject
- (void)commit;
- (id)initWithDomain:;
- (id)initWithDomain:significantDigits:;
- (void)clearScalar:;
- (void)setScalar:value:;
- (void)addToScalar:value:;
- (void)clearDistribution:;
- (void)setDistribution:value:;
- (void)pushToDistribution:value:;
- (void)setDistribution:value:significantDigits:;
- (void)pushToDistribution:value:significantDigits:;
+ (BOOL)enabled;
+ (void)clearScalar:domain:;
+ (void)setScalar:value:domain:;
+ (void)addToScalar:value:domain:;
+ (void)clearDistribution:domain:;
+ (void)setDistribution:value:domain:;
+ (void)pushToDistribution:value:domain:;
+ (void)setDistribution:value:domain:significantDigits:;
+ (void)pushToDistribution:value:domain:significantDigits:;
@end
