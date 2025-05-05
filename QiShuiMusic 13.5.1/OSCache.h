@interface OSCache : NSCache
@property (nonatomic) Q count;
@property (nonatomic) Q totalCost;
- (id)objectForKeyedSubscript:;
- (void)setObject:forKeyedSubscript:;
- (void)enumerateKeysAndObjectsUsingBlock:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (unsigned long long)count;
- (unsigned long long)totalCost;
+ (id)allocWithZone:;
@end
