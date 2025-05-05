@interface ASCMetricsData : NSObject
@property (nonatomic) NSString topic;
@property (nonatomic) BOOL shouldFlush;
@property (nonatomic) NSDictionary fields;
@property (nonatomic) NSSet includingFields;
@property (nonatomic) NSSet excludingFields;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)fields;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)topic;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTopic:shouldFlush:fields:includingFields:excludingFields:;
- (id)metricsDataByMergingFields:uniquingFieldsWithBlock:;
- (BOOL)shouldFlush;
- (id)includingFields;
- (id)excludingFields;
+ (BOOL)supportsSecureCoding;
@end
