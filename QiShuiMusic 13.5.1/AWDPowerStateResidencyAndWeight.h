@interface AWDPowerStateResidencyAndWeight : PBCodable
@property (nonatomic) BOOL hasResidency;
@property (nonatomic) I residency;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) I weight;
- (unsigned int)weight;
- (BOOL)hasWeight;
- (void)writeTo:;
- (void)setWeight:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setHasWeight:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setResidency:;
- (void)setHasResidency:;
- (BOOL)hasResidency;
- (unsigned int)residency;
@end
