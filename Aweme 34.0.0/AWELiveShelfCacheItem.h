@interface AWELiveShelfCacheItem : NSObject
@property (nonatomic) @ cacheData;
@property (nonatomic) double cacheTime;
@property (nonatomic) BOOL isValid;
- (double)cacheTime;
- (void)setCacheTime:;
- (id)cacheData;
- (void)setCacheData:;
- (BOOL)isValid;
- (void)setIsValid:;
- (void).cxx_destruct;
@end
