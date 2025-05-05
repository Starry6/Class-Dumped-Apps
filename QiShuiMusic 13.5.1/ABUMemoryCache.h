@interface ABUMemoryCache : NSObject
@property (nonatomic) NSMutableDictionary data;
@property (nonatomic) ABUPersistenceOption option;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateObjectsForKeys:WithBlock:;
- (void)appDidEnterBackgroundNotification;
- (void)appDidReceiveMemoryWarningNotification;
- (BOOL)removeAll;
- (id)init;
- (BOOL)setObject:forKey:;
- (void)dealloc;
- (BOOL)save;
- (id)data;
- (BOOL)removeObjectsForKeys:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setOption:;
- (void)setData:;
- (id)objectsForKeys:;
- (id)allObjects;
- (id)option;
- (id)initWithOption:;
- (BOOL)hasObjectForKey:;
@end
