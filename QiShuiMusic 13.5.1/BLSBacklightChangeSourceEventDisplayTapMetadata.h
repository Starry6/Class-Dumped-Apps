@interface BLSBacklightChangeSourceEventDisplayTapMetadata : BLSBacklightChangeSourceEventMetadata
@property (nonatomic) {CGPoint=dd} position;
- (id)position;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPosition:;
+ (BOOL)supportsSecureCoding;
@end
