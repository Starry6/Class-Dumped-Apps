@interface PARLookupRequest : PARRequest
@property (nonatomic) NSString queryString;
@property (nonatomic) NSString queryContext;
@property (nonatomic) NSString domain;
@property (nonatomic) q lookupSelectionType;
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSString preferredLanguage;
- (void)setAppBundleId:;
- (void)setPreferredLanguage:;
- (id)appBundleId;
- (id)initWithCoder:;
- (id)queryContext;
- (void)encodeWithCoder:;
- (void)setQueryString:;
- (void)setQueryContext:;
- (void).cxx_destruct;
- (id)domain;
- (void)setDomain:;
- (id)preferredLanguage;
- (id)queryString;
- (long long)lookupSelectionType;
- (void)setLookupSelectionType:;
- (unsigned int)nwActivityLabel;
+ (BOOL)supportsSecureCoding;
@end
