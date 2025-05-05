@interface TTKitchenKVCollection : NSObject
@property (nonatomic) NSMutableDictionary dictionary;
@property (nonatomic) NSArray allValues;
@property (nonatomic) NSArray allKeys;
@property (nonatomic) NSDictionary keyAccessTime;
@property (nonatomic) BOOL shouldSaveKeyAccessTimeBeforeResigning;
- (id)keyAccessTime;
- (void)setShouldSaveKeyAccessTimeBeforeResigning:;
- (BOOL)shouldSaveKeyAccessTimeBeforeResigning;
- (id)dictionary;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (void)enumerateKeysAndObjectsUsingBlock:;
- (void)setDictionary:;
- (void)addEntriesFromDictionary:;
- (id)allKeys;
- (void)willResignActive:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)allValues;
@end
