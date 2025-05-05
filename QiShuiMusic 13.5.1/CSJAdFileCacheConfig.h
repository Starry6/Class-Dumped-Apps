@interface CSJAdFileCacheConfig : NSObject
@property (nonatomic) NSString directoryName;
@property (nonatomic) q maxFileCount;
@property (nonatomic) q maxSize;
@property (nonatomic) NSString keyLog;
- (id)keyLog;
- (long long)maxFileCount;
- (void)setDirectoryName:;
- (void)setKeyLog:;
- (void)setMaxFileCount:;
- (long long)maxSize;
- (void)setMaxSize:;
- (id)init;
- (BOOL)valid;
- (void).cxx_destruct;
- (id)directoryName;
@end
