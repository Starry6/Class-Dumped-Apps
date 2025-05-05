@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery
- (void)_enumerateWithXPCConnection:block:;
- (id)systemMode;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_queryDictionary;
- (id)_initWithQueryDictionary:applyFilter:;
- (BOOL)matchesPlugin:pluginData:withDatabase:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
