@interface CTEncryptionStatusInfo : NSObject
@property (nonatomic) q status;
- (void)setStatus:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithStatus:;
- (long long)status;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
