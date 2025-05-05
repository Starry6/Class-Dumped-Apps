@interface MPModelSongKind : MPModelKind
@property (nonatomic) Q variants;
@property (nonatomic) Q options;
- (unsigned long long)variants;
- (id)humanDescription;
- (id)representedSearchScopePredicate;
- (id)predicateWithBaseProperty:;
- (void)applyToView:withContext:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)kindWithVariants:options:;
+ (id)identityKind;
@end
