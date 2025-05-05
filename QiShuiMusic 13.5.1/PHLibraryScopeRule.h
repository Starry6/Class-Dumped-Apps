@interface PHLibraryScopeRule : NSObject
@property (nonatomic) PLLibraryScopeRule proxyObject;
@property (nonatomic) PLLibraryScopeRule plRepresentation;
- (void)addCondition:;
- (id)initWithQuery:;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)proxyObject;
- (id)forwardingTargetForSelector:;
- (id)copyWithZone:;
- (id)plRepresentation;
- (id)initWithProxyObject:;
- (void)removeConditionOfType:;
- (id)dateRangeCondition;
- (id)personCondition;
- (id)unknownConditions;
- (void)setProxyObject:;
+ (id)dataFromRules:;
+ (id)fetchLibraryScopeRulesForLibraryScope:options:;
+ (id)suggestedStartDateForRules:autoSharePolicy:options:error:;
+ (unsigned long long)estimatedAssetCountForRules:autoSharePolicy:imageCount:videoCount:audioCount:itemCount:options:error:;
+ (id)_estimatedAssetsForRules:autoSharePolicy:options:error:;
+ (BOOL)generateDefaultRulesForLibraryScope:options:error:;
@end
