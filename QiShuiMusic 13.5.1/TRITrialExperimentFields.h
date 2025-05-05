@interface TRITrialExperimentFields : PBCodable
@property (nonatomic) BOOL hasClientExperimentId;
@property (nonatomic) NSString clientExperimentId;
@property (nonatomic) BOOL hasClientTreatmentId;
@property (nonatomic) NSString clientTreatmentId;
- (id)clientTreatmentId;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (BOOL)hasClientTreatmentId;
- (void)mergeFrom:;
- (void)setClientExperimentId:;
- (BOOL)hasClientExperimentId;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)clientExperimentId;
- (void)setClientTreatmentId:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
