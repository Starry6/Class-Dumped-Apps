@interface MPModelKind : NSObject
@property (nonatomic) # modelClass;
@property (nonatomic) NSString humanDescription;
@property (nonatomic) MPModelKind identityKind;
- (id)humanDescription;
- (id)representedSearchScopePredicate;
- (id)predicateWithBaseProperty:;
- (void)applyToView:withContext:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (Class)modelClass;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)identityKind;
- (id)description;
- (BOOL)isEqual:;
- (id)_initWithModelClass:;
+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithModelClass:;
+ (id)kindWithModelClass:cacheKey:block:;
+ (id)_kindWithModelClass:cacheKey:block:;
@end
