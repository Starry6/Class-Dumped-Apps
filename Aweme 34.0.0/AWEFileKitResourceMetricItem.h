@interface AWEFileKitResourceMetricItem : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) q expiredDay;
@property (nonatomic) double expiredSize;
- (id)initWithPath:expiredDay:expiredSize:;
- (long long)expiredDay;
- (void)setExpiredDay:;
- (double)expiredSize;
- (void)setExpiredSize:;
- (id)path;
- (void).cxx_destruct;
- (void)setPath:;
@end
