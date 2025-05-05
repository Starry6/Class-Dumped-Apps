@interface AACustodianDataRecoveryKeys : NSObject
@property (nonatomic) NSData wrappedRKC;
@property (nonatomic) NSData wrappingKey;
@property (nonatomic) NSUUID custodianUUID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)custodianUUID;
- (void)setCustodianUUID:;
- (id)wrappingKey;
- (id)initWithWrappedRKC:wrappingKey:custodianUUID:;
- (id)wrappedRKC;
- (void)setWrappedRKC:;
- (void)setWrappingKey:;
+ (BOOL)supportsSecureCoding;
@end
