@interface DYSDKMMKVStorage : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) MMKV mmkv;
- (id)_getObjectOfClass:forKey:;
- (int)_getValueSizeForKey:;
- (id)getObjectOfClass:forKey:;
- (id)mmkv;
- (void)setMmkv:;
- (int)storageSizeInBytes;
- (BOOL)updateStorageSize:;
- (BOOL)_removeObjectForKey:;
- (BOOL)_setObject:forKey:;
- (BOOL)setObject:forKey:;
- (void)setName:;
- (id)allKeys;
- (void).cxx_destruct;
- (id)name;
- (BOOL)removeObjectForKey:;
+ (id)shareInstance;
@end
