@interface BMPBSiriMemoryReferenceResolutionEntityValue : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasValueData;
@property (nonatomic) NSData valueData;
- (id)valueData;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setValueData:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasValueData;
@end
