@interface PARFlightSearchRequest : PARRequest
@property (nonatomic) NSDate date;
@property (nonatomic) NSString flightQuery;
@property (nonatomic) NSString appBundleId;
- (void)setAppBundleId:;
- (Class)responseClass;
- (id)appBundleId;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDate:;
- (unsigned int)nwActivityLabel;
- (id)flightQuery;
- (void)setFlightQuery:;
+ (BOOL)supportsSecureCoding;
@end
