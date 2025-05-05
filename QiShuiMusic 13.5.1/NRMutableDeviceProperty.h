@interface NRMutableDeviceProperty : NRMutableStateBase
@property (nonatomic) <NSObject><NSCopying> value;
@property (nonatomic) NRPBMutableDeviceProperty protobuf;
- (id)init;
- (void)setProtobuf:;
- (id)initWithProtobuf:;
- (id)applyDiff:upOnly:notifyParent:unconditional:;
- (id)protobuf;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithValue:;
+ (BOOL)supportsSecureCoding;
+ (id)diffFrom:to:;
+ (id)enclosedClassTypes;
@end
