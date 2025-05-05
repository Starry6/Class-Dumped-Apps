@interface GEODefaultsDBDict : GEODefaultsDBCollection
- (void)enumerateKeysAndObjectsUsingBlock:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (unsigned long long)count;
+ (id)dbValue:;
@end
