@interface PIAMMKVStorage : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)containKey:;
- (id)initWithStorageID:;
- (id)mmkv;
- (id)objectForKey:class:;
- (void)setMmkv:;
- (BOOL)setObject:forKey:;
- (void)clearAll;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
+ (id)piaRootPath;
+ (id)sharedInstance;
@end
