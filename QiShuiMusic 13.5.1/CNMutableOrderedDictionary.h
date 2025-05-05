@interface CNMutableOrderedDictionary : CNOrderedDictionary
- (void)setObject:forKey:;
- (void)setObject:forKeyedSubscript:;
- (void)removeObjectForKey:;
- (id)initWithDictionary:orderedKeys:;
@end
