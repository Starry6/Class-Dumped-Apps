@interface AMSThreadSafeDictionary : NSObject
@property (nonatomic) AMSThreadSafeObject backingDictionary;
@property (nonatomic) NSArray allKeys;
@property (nonatomic) NSArray allValues;
- (id)init;
- (void)setObject:forKey:;
- (id)backingDictionary;
- (void)readWrite:;
- (void)setBackingDictionary:;
- (id)allKeys;
- (void)removeAllObjects;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)allValues;
- (void)removeObjectForKey:;
@end
