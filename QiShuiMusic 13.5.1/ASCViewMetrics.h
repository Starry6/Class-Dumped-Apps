@interface ASCViewMetrics : NSObject
@property (nonatomic) NSArray instructions;
@property (nonatomic) NSDictionary pageFields;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)instructions;
- (id)initWithInstructions:pageFields:;
- (id)dataForInvocationPoint:;
- (id)pageFields;
+ (BOOL)supportsSecureCoding;
@end
