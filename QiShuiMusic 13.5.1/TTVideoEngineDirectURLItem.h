@interface TTVideoEngineDirectURLItem : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSString videoId;
@property (nonatomic) NSString cacheFilePath;
@property (nonatomic) q urlExpiredTime;
- (void)setUrlExpiredTime:;
- (long long)urlExpiredTime;
- (id)urls;
- (id)cacheFilePath;
- (id)key;
- (void)setUrls:;
- (void)setKey:;
- (void).cxx_destruct;
- (id)videoId;
- (void)setVideoId:;
- (void)setCacheFilePath:;
+ (id)urlItem:urls:urlExpiredTime:;
@end
