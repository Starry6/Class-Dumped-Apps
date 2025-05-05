@interface GEOCacheInvalidationData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) double ttl;
@property (nonatomic) I version;
@property (nonatomic) NSArray versionDomains;
- (unsigned int)version;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)timestamp;
- (double)ttl;
- (BOOL)_isKey:subsetOf:;
- (id)initWithTimestamp:ttl:version:domains:;
- (BOOL)isInvalidatedByServiceVersion:domains:;
- (id)versionDomains;
+ (BOOL)supportsSecureCoding;
@end
