@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate
- (void)dealloc;
- (BOOL)disambiguationKeypathHasToMany;
- (id)generateSQLStringInContext:;
- (id)disambiguationKeypath;
- (void)setDisambiguatingEntity:withKeypath:hasToMany:;
- (id)disambiguatingEntity;
@end
