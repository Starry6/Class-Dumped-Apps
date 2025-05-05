@interface CLPPoiCollectionRequest : PBRequest
@property (nonatomic) CLPMeta meta;
@property (nonatomic) NSMutableArray harvests;
- (id)meta;
- (Class)responseClass;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setMeta:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearHarvests;
- (void)addHarvests:;
- (unsigned long long)harvestsCount;
- (id)harvestsAtIndex:;
- (id)harvests;
- (void)setHarvests:;
+ (Class)harvestsType;
@end
