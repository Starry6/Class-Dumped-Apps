@interface NSCachingFetchRequest : NSFetchRequest
@property (nonatomic) @ _identifier;
@property (nonatomic) NSDictionary substitutionVariables;
- (BOOL)_isCachingFetchRequest;
- (id)_copyForDirtyContext;
- (id)_identifier;
- (id)init;
- (void)dealloc;
- (id)substitutionVariables;
- (void)setSubstitutionVariables:;
- (void)_disableSQLStatementCaching;
- (id)_cachedInfoForRequestor:;
- (void)_cacheInfo:forRequestor:;
- (id)copyWithZone:;
+ (id)_generateIdentifier;
@end
