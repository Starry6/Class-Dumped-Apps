@interface AWEGDCacheValueModel : NSObject
@property (nonatomic) NSDictionary ditoData;
@property (nonatomic) q timestamp;
@property (nonatomic) NSString cacheFrom;
@property (nonatomic) q stayTime;
@property (nonatomic) q stayTimeInMinutes;
@property (nonatomic) NSString cacheScene;
@property (nonatomic) q expireTime;
- (id)cacheScene;
- (void)setCacheScene:;
- (void)setStayTime:;
- (long long)stayTime;
- (id)ditoData;
- (void)setDitoData:;
- (id)cacheFrom;
- (void)setCacheFrom:;
- (long long)stayTimeInMinutes;
- (void)setStayTimeInMinutes:;
- (long long)timestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (long long)expireTime;
- (void)setExpireTime:;
@end
