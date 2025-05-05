@interface NRMiniUUIDSet : NSObject
@property (nonatomic) NSData data;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (void)setData:;
- (id).cxx_construct;
- (id)copyWithZone:;
- (id)initWithUUIDSet:;
- (BOOL)hasUUID:;
+ (BOOL)supportsSecureCoding;
@end
