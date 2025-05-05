@interface MPModelComposerKind : MPModelKind
@property (nonatomic) MPModelAlbumKind albumKind;
- (id)humanDescription;
- (id)representedSearchScopePredicate;
- (id)albumKind;
- (void)applyToView:withContext:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)kindWithAlbumKind:;
+ (id)identityKind;
@end
