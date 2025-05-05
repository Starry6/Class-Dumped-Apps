@interface BDUGLocationCacheInfo : NSObject
@property (nonatomic) BDUGLocationInfo locationInfo;
@property (nonatomic) q accuracy;
@property (nonatomic) double timeStamp;
@property (nonatomic) NSError error;
- (id)initWithLocationInfo:accuracy:timestamp:error:;
- (id)locationInfo;
- (void)setLocationInfo:;
- (void)setError:;
- (id)error;
- (id)initWithCoder:;
- (long long)accuracy;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)timeStamp;
- (id)copyWithZone:;
- (void)setTimeStamp:;
- (void)setAccuracy:;
+ (BOOL)supportsSecureCoding;
@end
