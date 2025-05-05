@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate
- (void)dealloc;
- (BOOL)disambiguationKeypathHasToMany;
- (BOOL)isOrScoped;
- (id)generateSQLStringInContext:;
- (id)initWithPredicate:inScope:inContext:;
- (id)disambiguationKeypath;
- (void)setDisambiguatingEntity:withKeypath:hasToMany:;
- (id)disambiguatingEntity;
@end
