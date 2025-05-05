@interface MPModelTVShowKind : MPModelKind
@property (nonatomic) MPModelTVSeasonKind seasonKind;
- (id)seasonKind;
- (id)humanDescription;
- (id)representedSearchScopePredicate;
- (void)applyToView:withContext:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)kindWithSeasonKind:;
+ (id)identityKind;
@end
