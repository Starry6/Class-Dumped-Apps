@interface TTVideoEngineCacheInfo : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString fileKey;
@property (nonatomic) Q fileSize;
@property (nonatomic) NSString cacheKey;
@property (nonatomic) NSString spadeaKey;
@property (nonatomic) double lastUpdateTime;
- (id)fileKey;
- (BOOL)checkCacheFile:fileSize:;
- (BOOL)isInDisk;
- (void)setFileKey:;
- (void)setSpadeaKey:;
- (id)spadeaKey;
- (id)filePath;
- (unsigned long long)fileSize;
- (id)cacheKey;
- (double)lastUpdateTime;
- (id)fileName;
- (void)setFilePath:;
- (void)setFileSize:;
- (void).cxx_destruct;
- (void)setFileName:;
- (void)setLastUpdateTime:;
- (void)setCacheKey:;
+ (id)fileKey:;
+ (BOOL)isValidKeys:;
+ (id)keysWithFileName:;
+ (unsigned long long)localFileDateTime:;
+ (unsigned long long)localFileSize:;
+ (id)md5:;
+ (id)spadeaKey:;
+ (unsigned long long)fileSize:;
+ (id)cacheKey:;
@end
