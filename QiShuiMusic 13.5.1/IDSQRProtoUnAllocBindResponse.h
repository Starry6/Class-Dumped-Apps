@interface IDSQRProtoUnAllocBindResponse : PBCodable
@property (nonatomic) BOOL hasReportingDataBlob;
@property (nonatomic) NSData reportingDataBlob;
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
- (BOOL)hasReportingDataBlob;
- (id)reportingDataBlob;
- (void)setReportingDataBlob:;
@end
