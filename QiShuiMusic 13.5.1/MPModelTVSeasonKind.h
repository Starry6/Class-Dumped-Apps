@interface MPModelTVSeasonKind : MPModelKind
@property (nonatomic) MPModelTVEpisodeKind episodeKind;
- (id)humanDescription;
- (void)applyToView:withContext:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)episodeKind;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (id)kindWithEpisodeKind:;
+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
@end
