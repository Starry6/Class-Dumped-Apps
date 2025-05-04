@interface AWEPzContinuousDisplayUnconsumedTimingStrategyDataModel : MTLModel
@property (nonatomic) q timeLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTimeLimit:;
- (BOOL)isValid;
- (long long)timeLimit;
+ (id)JSONKeyPathsByPropertyKey;
@end
