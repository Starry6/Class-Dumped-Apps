@interface BMPBPersonalInference : PBCodable
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasFact;
@property (nonatomic) BMPBPersonalFact fact;
@property (nonatomic) NSMutableArray qualifiers;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) I modelVersion;
- (double)confidence;
- (unsigned int)modelVersion;
- (void)setConfidence:;
- (void)setHasModelVersion:;
- (void)setModelVersion:;
- (void)writeTo:;
- (BOOL)hasModelVersion;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasConfidence:;
- (BOOL)hasConfidence;
- (BOOL)hasFact;
- (void)clearQualifiers;
- (void)addQualifiers:;
- (unsigned long long)qualifiersCount;
- (id)qualifiersAtIndex:;
- (id)fact;
- (void)setFact:;
- (id)qualifiers;
- (void)setQualifiers:;
+ (Class)qualifiersType;
@end
