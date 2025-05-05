@interface CLPLocationProcessingPipelineMetadata : PBCodable
@property (nonatomic) BOOL hasPrivacySanitization;
@property (nonatomic) CLPPrivacySanitization privacySanitization;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPrivacySanitization;
- (id)privacySanitization;
- (void)setPrivacySanitization:;
@end
