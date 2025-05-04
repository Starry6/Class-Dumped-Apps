@interface AWEPzComponentGroupPeriodShowLimitStrategyDataModel : AWEPzStrategyBaseRecordDataModel
@property (nonatomic) q timeLimit;
@property (nonatomic) q showLimit;
@property (nonatomic) NSArray avoidScopes;
- (long long)showLimit;
- (void)setShowLimit:;
- (id)avoidScopes;
- (void)setAvoidScopes:;
- (void)setTimeLimit:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (long long)timeLimit;
+ (id)avoidScopesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
