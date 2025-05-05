@interface AKTrustedContactsSyncResult : NSObject
@property (nonatomic) NSDictionary custodianOperationsByID;
@property (nonatomic) NSDictionary beneficiaryOperationsByID;
@property (nonatomic) NSString custodianListVersion;
@property (nonatomic) NSString beneficiaryListVersion;
@property (nonatomic) NSArray orphanedCustodianUUIDs;
@property (nonatomic) NSArray orphanedBeneficiaryUUIDs;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)custodianOperationsByID;
- (void)setCustodianOperationsByID:;
- (id)beneficiaryOperationsByID;
- (void)setBeneficiaryOperationsByID:;
- (id)custodianListVersion;
- (void)setCustodianListVersion:;
- (id)beneficiaryListVersion;
- (void)setBeneficiaryListVersion:;
- (id)orphanedCustodianUUIDs;
- (void)setOrphanedCustodianUUIDs:;
- (id)orphanedBeneficiaryUUIDs;
- (void)setOrphanedBeneficiaryUUIDs:;
+ (BOOL)supportsSecureCoding;
@end
