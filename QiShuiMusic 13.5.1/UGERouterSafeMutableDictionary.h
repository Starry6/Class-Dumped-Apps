@interface UGERouterSafeMutableDictionary : NSObject
@property (nonatomic) NSMutableDictionary safeDictionary;
@property (nonatomic) NSObject<OS_dispatch_queue> safeQueue;
@property (nonatomic) NSArray allKeys;
@property (nonatomic) NSArray allValues;
- (id)safeDictionary;
- (id)safeQueue;
- (void)setSafeDictionary:;
- (void)setSafeQueue:;
- (id)init;
- (void)setObject:forKey:;
- (id)allKeys;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)allValues;
- (void)removeObjectForKey:;
- (id)allKeysForObject:;
+ (id)dictionary;
@end
