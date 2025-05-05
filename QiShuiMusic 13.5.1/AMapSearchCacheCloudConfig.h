@interface AMapSearchCacheCloudConfig : NSObject
@property (nonatomic) BOOL able;
@property (nonatomic) double timeOffset;
@property (nonatomic) NSInteger num;
@property (nonatomic) float limitDistance;
- (BOOL)able;
- (float)limitDistance;
- (void)setAble:;
- (void)setLimitDistance:;
- (id)dictionary;
- (double)timeOffset;
- (void)setTimeOffset:;
- (void)setNum:;
- (int)num;
+ (id)cacheConfigWithAble:time:count:;
+ (id)cacheConfigWithAble:time:count:limitDistance:;
@end
