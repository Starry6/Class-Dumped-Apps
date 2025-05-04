@interface AWELiveUpdateCacheDataParamModel : IESLiveBridgeModel
@property (nonatomic) NSString cacheKey;
@property (nonatomic) NSString cacheData;
@property (nonatomic) NSNumber validSeconds;
- (id)cacheData;
- (void)setCacheData:;
- (id)validSeconds;
- (void)setValidSeconds:;
- (id)cacheKey;
- (void).cxx_destruct;
- (void)setCacheKey:;
+ (id)modelCustomPropertyMapper;
@end
