@interface CLPMeta : PBCodable
@property (nonatomic) NSString productId;
@property (nonatomic) NSString softwareVersion;
@property (nonatomic) BOOL hasSubmissionId;
@property (nonatomic) q submissionId;
@property (nonatomic) BOOL hasProbeId;
@property (nonatomic) NSString probeId;
- (id)productId;
- (void)writeTo:;
- (id)softwareVersion;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setProductId:;
- (void)setSoftwareVersion:;
- (void)setSubmissionId:;
- (void)setHasSubmissionId:;
- (BOOL)hasSubmissionId;
- (BOOL)hasProbeId;
- (long long)submissionId;
- (id)probeId;
- (void)setProbeId:;
@end
