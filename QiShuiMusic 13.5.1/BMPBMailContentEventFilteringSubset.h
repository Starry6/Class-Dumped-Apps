@interface BMPBMailContentEventFilteringSubset : PBCodable
@property (nonatomic) BOOL hasUniqueId;
@property (nonatomic) NSString uniqueId;
@property (nonatomic) BOOL hasDomainId;
@property (nonatomic) NSString domainId;
- (id)uniqueId;
- (BOOL)hasUniqueId;
- (void)setUniqueId:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)domainId;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasDomainId;
- (void)setDomainId:;
@end
