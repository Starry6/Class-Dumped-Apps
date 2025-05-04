@interface AWEDetailNetworkSafeDictionary : NSObject
@property (nonatomic) NSMutableDictionary dictionary;
- (id)syncQueue;
- (id)init;
- (id)dictionary;
- (void)setDictionary:;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (id)allKeys;
- (id)allValues;
- (void)setObject:forKey:;
@end
