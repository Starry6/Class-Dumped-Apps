@interface AWEPzStrategyModel : MTLModel
@property (nonatomic) NSString strategyID;
@property (nonatomic) NSString type;
@property (nonatomic) NSArray scopes;
@property (nonatomic) NSArray excludedScopes;
@property (nonatomic) NSDictionary data;
@property (nonatomic) q index;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strategyID;
- (id)excludedScopes;
- (void)setIndex:;
- (id)scopes;
- (long long)index;
- (id)type;
- (id)description;
- (void)setScopes:;
- (void).cxx_destruct;
- (id)data;
+ (id)scopesJSONTransformer;
+ (id)excludedScopesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
