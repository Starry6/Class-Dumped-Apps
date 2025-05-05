@interface ENStableGroupID : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSData dataRepresentation;
- (id)initWithUUID:;
- (id)uuid;
- (id)initWithDataRepresentation:;
- (void)setUuid:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)dataRepresentation;
- (id)copyWithZone:;
- (id)_mutableDataRepresentation;
- (int)customUUIDCompare:u2:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)stableGroupIDLength;
+ (id)stableGroupIDWithCurrentTime;
@end
