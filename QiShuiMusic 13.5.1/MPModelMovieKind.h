@interface MPModelMovieKind : MPModelKind
@property (nonatomic) Q variants;
@property (nonatomic) Q options;
- (unsigned long long)variants;
- (id)humanDescription;
- (id)representedSearchScopePredicate;
- (id)predicateWithBaseProperty:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)kindWithVariants:options:;
+ (id)identityKind;
@end
