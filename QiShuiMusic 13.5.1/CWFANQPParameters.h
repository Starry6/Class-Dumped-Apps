@interface CWFANQPParameters : NSObject
@property (nonatomic) NSArray scanResults;
@property (nonatomic) NSArray ANQPElementIDList;
@property (nonatomic) Q maximumCacheAge;
@property (nonatomic) BOOL cacheOnly;
@property (nonatomic) BOOL includeMatchingKnownNetworkProfiles;
- (void)setMaximumCacheAge:;
- (void)setCacheOnly:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)includeMatchingKnownNetworkProfiles;
- (unsigned long long)maximumCacheAge;
- (id)description;
- (void)setANQPElementIDList:;
- (void)setIncludeMatchingKnownNetworkProfiles:;
- (id)ANQPElementIDList;
- (BOOL)isEqual:;
- (BOOL)cacheOnly;
- (id)copyWithZone:;
- (BOOL)isEqualToANQPParameters:;
- (id)scanResults;
- (void)setScanResults:;
+ (BOOL)supportsSecureCoding;
@end
