@interface NRDeviceCollectionHistoryEntry : NSObject
@property (nonatomic) Q index;
@property (nonatomic) NSDate date;
@property (nonatomic) NRDeviceCollectionDiff diff;
@property (nonatomic) NRMutableDeviceCollection state;
@property (nonatomic) I switchIndex;
@property (nonatomic) NRPBDeviceCollectionHistoryEntry protobuf;
- (id)initWithProtobuf:;
- (id)protobuf;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)date;
- (unsigned long long)index;
- (void)encodeWithCoder:;
- (id)state;
- (id)diff;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)switchIndex;
- (id)initWithHistory:index:date:diff:switchIndex:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
