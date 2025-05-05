@interface NSURLSessionTaskMetrics : NSObject
@property (nonatomic) NSArray transactionMetrics;
@property (nonatomic) NSDateInterval taskInterval;
@property (nonatomic) Q redirectCount;
- (id)_geo_clientMetrics;
- (id)_geo_remoteAddressAndPort;
- (id)init;
- (unsigned long long)redirectCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)transactionMetrics;
- (id)taskInterval;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
