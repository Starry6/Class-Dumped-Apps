@interface AACustodianRecoveryRequestContext : NSObject
@property (nonatomic) BOOL CLIMode;
@property (nonatomic) BOOL dataOnlyRecovery;
@property (nonatomic) NSString recoverySessionID;
@property (nonatomic) NSString ownerAppleID;
@property (nonatomic) NSString recoveryCode;
@property (nonatomic) NSUUID custodianUUID;
@property (nonatomic) NSString custodianRecoveryToken;
- (id)custodianRecoveryToken;
- (id)initWithCoder:;
- (void)setCustodianRecoveryToken:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)ownerAppleID;
- (void)setOwnerAppleID:;
- (id)custodianUUID;
- (void)setCustodianUUID:;
- (id)recoverySessionID;
- (void)setRecoverySessionID:;
- (id)recoveryCode;
- (void)setRecoveryCode:;
- (BOOL)CLIMode;
- (void)setCLIMode:;
- (BOOL)isDataOnlyRecovery;
- (void)setDataOnlyRecovery:;
+ (BOOL)supportsSecureCoding;
@end
