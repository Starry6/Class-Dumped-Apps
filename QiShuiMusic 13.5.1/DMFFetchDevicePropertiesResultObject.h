@interface DMFFetchDevicePropertiesResultObject : CATTaskResultObject
@property (nonatomic) NSDictionary valuesByPropertyKey;
@property (nonatomic) NSDictionary errorsByPropertyKey;
@property (nonatomic) DMFDevice device;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (Class)classForCoder;
- (id)device;
- (id)initWithValuesByPropertyKey:errorsByPropertyKey:;
- (id)valueForPropertyKey:error:;
- (id)valuesByPropertyKey;
- (id)errorsByPropertyKey;
+ (BOOL)supportsSecureCoding;
@end
