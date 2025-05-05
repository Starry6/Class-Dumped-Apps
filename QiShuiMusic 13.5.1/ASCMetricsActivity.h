@interface ASCMetricsActivity : NSObject
@property (nonatomic) NSDictionary fields;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)fields;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithFields:;
- (id)metricsActivityWithValue:forKey:;
- (id)metricsActivityByMergingFields:uniquingFieldsWithBlock:;
- (id)metricsActivityByRemovingValueForKey:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultFields;
@end
