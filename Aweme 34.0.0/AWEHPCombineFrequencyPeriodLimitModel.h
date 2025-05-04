@interface AWEHPCombineFrequencyPeriodLimitModel : MTLModel
@property (nonatomic) q timeLimitSecond;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)timeLimitSecond;
- (void)setTimeLimitSecond:;
- (BOOL)isValidWithError:;
+ (id)JSONKeyPathsByPropertyKey;
@end
