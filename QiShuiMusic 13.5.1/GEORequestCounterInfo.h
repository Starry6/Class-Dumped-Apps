@interface GEORequestCounterInfo : NSObject
@property (nonatomic) NSArray requestTypes;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (unsigned long long)usedInterfaces;
- (void)_generateAggregateStatistics;
- (unsigned long long)xmitBytes;
- (unsigned long long)xmitBytesForType:;
- (unsigned long long)recvBytes;
- (unsigned long long)recvBytesForType:;
- (double)durationTotal;
- (double)durationTotalForType:;
- (double)durationAverage;
- (double)durationAverageForType:;
- (unsigned long long)usedInterfacesForType:;
- (id)requestTypes;
- (void)enumerateRequestTypes:;
- (unsigned long long)numberOfRequestsForType:result:;
- (id)nonZeroResultTypesForType:;
- (void)_appendFormattedStringTo:;
- (void)_appendFormattedCSVStringTo:forAppId:;
+ (BOOL)supportsSecureCoding;
@end
