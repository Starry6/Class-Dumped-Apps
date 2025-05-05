@interface BDRuleParameterFetcher : NSObject
@property (nonatomic) NSDictionary extraParameters;
@property (nonatomic) BDRuleParameterBuilder builder;
@property (nonatomic) NSMutableDictionary cachedParameters;
@property (nonatomic) double cost;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cachedParameters;
- (id)envValueOfKey:;
- (id)getParameterWithKey:error:;
- (id)initWithExtraParameters:;
- (void)resetCost;
- (void)setCachedParameters:;
- (id)usedParameters;
- (double)cost;
- (id)builder;
- (void).cxx_destruct;
- (id)extraParameters;
- (void)setExtraParameters:;
- (void)setBuilder:;
- (void)setCost:;
@end
