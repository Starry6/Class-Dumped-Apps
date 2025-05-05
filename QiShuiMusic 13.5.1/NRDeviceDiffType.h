@interface NRDeviceDiffType : NSObject
@property (nonatomic) NRDeviceDiff diff;
@property (nonatomic) Q changeType;
@property (nonatomic) NRPBDeviceDiffType protobuf;
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
