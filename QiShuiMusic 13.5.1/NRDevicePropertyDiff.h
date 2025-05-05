@interface NRDevicePropertyDiff : NRDiffBase
@property (nonatomic) <NSObject><NSCopying> value;
@property (nonatomic) NRPBDevicePropertyDiff protobuf;
- (id)initWithProtobuf:;
- (id)protobuf;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithValue:;
+ (BOOL)supportsSecureCoding;
+ (id)enclosedClassTypes;
+ (id)packPropertyValue:;
+ (id)unpackPropertyValue:;
@end
