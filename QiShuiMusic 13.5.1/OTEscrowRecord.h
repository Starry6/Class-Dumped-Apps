@interface OTEscrowRecord : PBCodable
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) Q creationDate;
@property (nonatomic) BOOL hasRemainingAttempts;
@property (nonatomic) Q remainingAttempts;
@property (nonatomic) BOOL hasEscrowInformationMetadata;
@property (nonatomic) OTEscrowRecordMetadata escrowInformationMetadata;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL hasSilentAttemptAllowed;
@property (nonatomic) Q silentAttemptAllowed;
@property (nonatomic) BOOL hasRecordStatus;
@property (nonatomic) NSInteger recordStatus;
@property (nonatomic) BOOL hasRecordId;
@property (nonatomic) NSString recordId;
@property (nonatomic) BOOL hasRecoveryStatus;
@property (nonatomic) NSInteger recoveryStatus;
@property (nonatomic) BOOL hasCoolOffEnd;
@property (nonatomic) Q coolOffEnd;
@property (nonatomic) BOOL hasSerialNumber;
@property (nonatomic) NSString serialNumber;
@property (nonatomic) BOOL hasRecordViability;
@property (nonatomic) NSInteger recordViability;
@property (nonatomic) BOOL hasViabilityStatus;
@property (nonatomic) NSInteger viabilityStatus;
@property (nonatomic) BOOL hasFederationId;
@property (nonatomic) NSString federationId;
@property (nonatomic) BOOL hasExpectedFederationId;
@property (nonatomic) NSString expectedFederationId;
- (id)serialNumber;
- (BOOL)hasRecordId;
- (void)setRecordId:;
- (id)recordId;
- (void)setSerialNumber:;
- (void)setCreationDate:;
- (BOOL)hasLabel;
- (void)writeTo:;
- (void)setLabel:;
- (unsigned long long)hash;
- (id)label;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)creationDate;
- (BOOL)hasSerialNumber;
- (void)setHasCreationDate:;
- (BOOL)hasCreationDate;
- (void)setRemainingAttempts:;
- (void)setHasRemainingAttempts:;
- (BOOL)hasRemainingAttempts;
- (BOOL)hasEscrowInformationMetadata;
- (void)setSilentAttemptAllowed:;
- (void)setHasSilentAttemptAllowed:;
- (BOOL)hasSilentAttemptAllowed;
- (int)recordStatus;
- (void)setRecordStatus:;
- (void)setHasRecordStatus:;
- (BOOL)hasRecordStatus;
- (id)recordStatusAsString:;
- (int)StringAsRecordStatus:;
- (int)recoveryStatus;
- (void)setRecoveryStatus:;
- (void)setHasRecoveryStatus:;
- (BOOL)hasRecoveryStatus;
- (id)recoveryStatusAsString:;
- (int)StringAsRecoveryStatus:;
- (void)setCoolOffEnd:;
- (void)setHasCoolOffEnd:;
- (BOOL)hasCoolOffEnd;
- (int)recordViability;
- (void)setRecordViability:;
- (void)setHasRecordViability:;
- (BOOL)hasRecordViability;
- (id)recordViabilityAsString:;
- (int)StringAsRecordViability:;
- (int)viabilityStatus;
- (void)setViabilityStatus:;
- (void)setHasViabilityStatus:;
- (BOOL)hasViabilityStatus;
- (id)viabilityStatusAsString:;
- (int)StringAsViabilityStatus:;
- (BOOL)hasFederationId;
- (BOOL)hasExpectedFederationId;
- (unsigned long long)remainingAttempts;
- (id)escrowInformationMetadata;
- (void)setEscrowInformationMetadata:;
- (unsigned long long)silentAttemptAllowed;
- (unsigned long long)coolOffEnd;
- (id)federationId;
- (void)setFederationId:;
- (id)expectedFederationId;
- (void)setExpectedFederationId:;
@end
