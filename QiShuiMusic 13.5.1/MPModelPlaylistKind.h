@interface MPModelPlaylistKind : MPModelKind
@property (nonatomic) Q variants;
@property (nonatomic) MPModelPlaylistEntryKind playlistEntryKind;
@property (nonatomic) Q options;
- (id)playlistEntryKind;
- (unsigned long long)variants;
- (id)humanDescription;
- (id)representedSearchScopePredicate;
- (id)predicateWithBaseProperty:;
- (void)applyToView:withContext:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:playlistEntryKind:options:;
@end
