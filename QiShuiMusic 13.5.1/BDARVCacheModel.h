@interface BDARVCacheModel : NSObject
@property (nonatomic) NSData BDARData;
@property (nonatomic) q BDAREnterFrom;
@property (nonatomic) q BDARCacheFrom;
@property (nonatomic) BOOL BDARGeckoReady;
- (long long)BDARCacheFrom;
- (id)BDARData;
- (BOOL)BDARGeckoReady;
- (long long)BDAREnterFrom;
- (id)BDARInitWithData:enterFrom:cacheFrom:geckoReady:;
- (void)setBDARCacheFrom:;
- (void)setBDARData:;
- (void)setBDAREnterFrom:;
- (void)setBDARGeckoReady:;
- (void).cxx_destruct;
@end
