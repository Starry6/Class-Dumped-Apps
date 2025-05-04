@interface AWEVideoClipKeyManagedObject : NSObject
@property (nonatomic) NSMutableDictionary objectMapDictionary;
@property (nonatomic) @ currentKey;
@property (nonatomic) NSArray allKeys;
@property (nonatomic) NSArray allValues;
- (void)setObjectAsCurrentForKey:;
- (id)objectMapDictionary;
- (void)setObjectMapDictionary:;
- (id)currentKey;
- (id)init;
- (void)enumerateKeysAndObjectsUsingBlock:;
- (id)currentObject;
- (void)setObject:forKeyedSubscript:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (id)objectForKeyedSubscript:;
- (id)allKeys;
- (id)allValues;
- (void)setObject:forKey:;
- (void)setCurrentKey:;
@end
