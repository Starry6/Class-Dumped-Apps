@interface NRDevicePropertyDiffType : NSObject
@property (nonatomic) NRDevicePropertyDiff diff;
@property (nonatomic) Q changeType;
@property (nonatomic) NRPBDevicePropertyDiffType protobuf;
- (unsigned long long)changeType;
- (id)initWithProtobuf:;
- (id)protobuf;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithDiff:andChangeType:;
- (id)diff;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
