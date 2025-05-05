@interface LSPlugInQuery : _LSQuery
- (void)_enumerateWithXPCConnection:block:;
- (BOOL)_remoteResolutionIsExpensive;
- (void)sort:pluginIDs:andYield:context:;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)_init;
- (BOOL)isEqual:;
+ (id)pluginQueryWithIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)pluginQueryWithQueryDictionary:applyFilter:;
+ (id)pluginQueryWithURL:;
+ (id)pluginQuery;
+ (id)pluginQueryWithUUID:;
@end
