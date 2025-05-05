@interface TSPKSafeMutableDict : NSMutableDictionary
@property (nonatomic) NSMutableDictionary dictionary;
@property (nonatomic) NSObject<OS_dispatch_queue> readWriteQuene;
- (id)readWriteQuene;
- (void)setReadWriteQuene:;
- (id)dictionary;
- (id)init;
- (void)setObject:forKey:;
- (void)setDictionary:;
- (id)allKeys;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)allValues;
- (void)removeObjectForKey:;
@end
