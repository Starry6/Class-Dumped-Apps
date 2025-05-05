@interface AWEThreadSafeMutableDictionary : NSObject
@property (nonatomic) NSMutableDictionary dictionary;
@property (nonatomic) NSInteger lock;
- (id)objectForKey:create:;
- (id)safeCopyDictionary;
- (id)dictionary;
- (id)init;
- (void)setObject:forKey:;
- (void)setDictionary:;
- (id)allKeys;
- (void)removeAllObjects;
- (int)lock;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (void)setLock:;
@end
