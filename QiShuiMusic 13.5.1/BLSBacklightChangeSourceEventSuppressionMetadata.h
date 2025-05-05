@interface BLSBacklightChangeSourceEventSuppressionMetadata : BLSBacklightChangeSourceEventMetadata
@property (nonatomic) Q type;
@property (nonatomic) Q reason;
- (void)encodeWithXPCDictionary:;
- (unsigned long long)reason;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (unsigned long long)type;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithType:reason:;
+ (BOOL)supportsSecureCoding;
@end
