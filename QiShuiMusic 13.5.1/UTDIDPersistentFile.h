@interface UTDIDPersistentFile : NSObject
- (void)checkPath;
- (void)create:and:;
- (id)dataDict;
- (void)setDataDict:;
- (void)commit;
- (void)setObject:forKey:;
- (void)save;
- (id)allKeys;
- (void)clear;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (void)initData;
+ (id)createWithFile:and:;
@end
