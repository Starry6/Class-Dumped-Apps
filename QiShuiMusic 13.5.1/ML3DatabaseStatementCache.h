@interface ML3DatabaseStatementCache : NSObject
@property (nonatomic) Q cacheSize;
- (unsigned long long)cacheSize;
- (void)clearCache;
- (void)dealloc;
- (void)cacheStatement:;
- (id)initWithCacheSize:;
- (id)cachedStatementForSQL:;
- (id)allStatements;
- (void).cxx_destruct;
@end
