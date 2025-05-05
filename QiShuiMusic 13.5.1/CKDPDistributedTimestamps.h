@interface CKDPDistributedTimestamps : PBCodable
@property (nonatomic) NSMutableArray siteIdentifiers;
@property (nonatomic) NSMutableArray siteVersionVectors;
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
- (void)clearSiteIdentifiers;
- (void)addSiteIdentifiers:;
- (unsigned long long)siteIdentifiersCount;
- (id)siteIdentifiersAtIndex:;
- (void)clearSiteVersionVectors;
- (void)addSiteVersionVectors:;
- (unsigned long long)siteVersionVectorsCount;
- (id)siteVersionVectorsAtIndex:;
- (id)siteIdentifiers;
- (void)setSiteIdentifiers:;
- (id)siteVersionVectors;
- (void)setSiteVersionVectors:;
+ (Class)siteIdentifiersType;
+ (Class)siteVersionVectorsType;
@end
