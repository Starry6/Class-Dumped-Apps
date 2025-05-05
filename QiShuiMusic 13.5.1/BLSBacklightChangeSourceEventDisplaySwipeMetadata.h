@interface BLSBacklightChangeSourceEventDisplaySwipeMetadata : BLSBacklightChangeSourceEventMetadata
@property (nonatomic) q direction;
- (long long)direction;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDirection:;
+ (BOOL)supportsSecureCoding;
@end
