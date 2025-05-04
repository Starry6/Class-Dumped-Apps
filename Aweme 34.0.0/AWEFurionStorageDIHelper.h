@interface AWEFurionStorageDIHelper : NSObject
@property (nonatomic) <AWEStorageServiceKVInterface> handler;
- (void)setHandler:;
- (id)init;
- (id)handler;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (void)setObject:forKey:;
@end
