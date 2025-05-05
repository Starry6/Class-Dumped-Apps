@interface GEODefaultsDBArray : GEODefaultsDBCollection
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void)enumerateObjectsUsingBlock:;
- (unsigned long long)count;
+ (id)dbValue:;
@end
