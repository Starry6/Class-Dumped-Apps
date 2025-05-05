@interface AMapCacheFileManager : NSObject
@property (nonatomic) NSFileManager fileManager;
@property (nonatomic) NSString rootDirectory;
@property (nonatomic) NSString basePath;
- (BOOL)addSkipBackupAttributeToItemAtPath:;
- (BOOL)cacheItem:withFileName:atPath:;
- (id)cacheItemNameAtPath:error:;
- (id)cacheItemWithFileName:atPath:;
- (id)cachedItemsAtPath:;
- (unsigned long long)cachedItemsCountAtPath:;
- (BOOL)fileIsExistWithPath:isDirectory:;
- (id)filePathWithName:atPath:withDirectoryCreate:;
- (unsigned long long)fileSizeWithName:AtPath:error:;
- (void)initBasePath;
- (void)initLibraryBasePath;
- (id)initWithLibraryRootPath:;
- (id)initWithRootPath:;
- (BOOL)moveItemAtPath:withName:toPath:withName:error:;
- (BOOL)removeAllItemsAtPath:;
- (BOOL)removeAllItemsAtPath:error:;
- (BOOL)removeItemWithName:atPath:;
- (BOOL)removeItemWithName:atPath:error:;
- (id)fileManager;
- (id)rootDirectory;
- (void)setFileManager:;
- (void).cxx_destruct;
- (id)basePath;
@end
