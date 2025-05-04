@interface AWEThreadSafeMutableDictionary : NSObject
@property (nonatomic) NSMutableDictionary dictionary;
@property (nonatomic) NSInteger lock;
- (id)objectForKey:create:;
- (id)safeCopyDictionary;
- (id)init;
- (void)setLock:;
- (id)dictionary;
- (void)removeAllObjects;
- (void)setDictionary:;
- (int)lock;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (id)allKeys;
- (void)setObject:forKey:;
@end
