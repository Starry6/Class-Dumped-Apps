@interface TRITrialRolloutFields : PBCodable
@property (nonatomic) BOOL hasClientRolloutId;
@property (nonatomic) NSString clientRolloutId;
@property (nonatomic) BOOL hasClientFactorPackSetId;
@property (nonatomic) NSString clientFactorPackSetId;
@property (nonatomic) BOOL hasClientRampId;
@property (nonatomic) NSString clientRampId;
@property (nonatomic) BOOL hasClientTargetingRuleGroupOrdinal;
@property (nonatomic) NSInteger clientTargetingRuleGroupOrdinal;
- (void)setClientRampId:;
- (BOOL)hasClientTargetingRuleGroupOrdinal;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setClientRolloutId:;
- (void)copyTo:;
- (id)clientRolloutId;
- (void)mergeFrom:;
- (BOOL)hasClientRolloutId;
- (id)clientFactorPackSetId;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (BOOL)hasClientRampId;
- (id)clientRampId;
- (id)description;
- (int)clientTargetingRuleGroupOrdinal;
- (void)setHasClientTargetingRuleGroupOrdinal:;
- (id)dictionaryRepresentation;
- (void)setClientFactorPackSetId:;
- (void)setClientTargetingRuleGroupOrdinal:;
- (BOOL)isEqual:;
- (BOOL)hasClientFactorPackSetId;
- (id)copyWithZone:;
@end
