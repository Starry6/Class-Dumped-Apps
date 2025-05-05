@interface EMFQueryResultOverride : NSObject
@property (nonatomic) NSArray results;
@property (nonatomic) Q overrideSearchType;
@property (nonatomic) Q overrideBehavior;
- (id)results;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOverridesArray:searchType:behavior:;
- (unsigned long long)overrideSearchType;
- (unsigned long long)overrideBehavior;
@end
