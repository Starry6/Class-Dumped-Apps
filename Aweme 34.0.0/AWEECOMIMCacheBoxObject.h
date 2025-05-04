@interface AWEECOMIMCacheBoxObject : NSObject
@property (nonatomic) double validityPeriod;
@property (nonatomic) double cacheTime;
@property (nonatomic) <NSCoding> cacheObject;
- (double)validityPeriod;
- (void)setValidityPeriod:;
- (double)cacheTime;
- (void)setCacheTime:;
- (void)setCacheObject:;
- (id)init;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)cacheObject;
@end
