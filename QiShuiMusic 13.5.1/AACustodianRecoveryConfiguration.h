@interface AACustodianRecoveryConfiguration : NSObject
@property (nonatomic) q codeLength;
@property (nonatomic) q maxSessionTime;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (long long)codeLength;
- (id)initWithConfigurationDictionary:;
- (void)setCodeLength:;
- (long long)maxSessionTime;
- (void)setMaxSessionTime:;
+ (BOOL)supportsSecureCoding;
@end
