@interface AWEPzSameTimeShowPriorityLimitStrategyDataModel : MTLModel
@property (nonatomic) q countLimit;
@property (nonatomic) q threshold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataDefault;
- (long long)threshold;
- (void)setThreshold:;
- (BOOL)isValid;
- (void)setCountLimit:;
- (long long)countLimit;
+ (id)JSONKeyPathsByPropertyKey;
@end
