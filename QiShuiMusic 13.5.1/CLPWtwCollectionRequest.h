@interface CLPWtwCollectionRequest : PBRequest
@property (nonatomic) CLPMeta meta;
@property (nonatomic) NSMutableArray wtwLocations;
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
- (void)clearWtwLocations;
- (void)addWtwLocation:;
- (unsigned long long)wtwLocationsCount;
- (id)wtwLocationAtIndex:;
- (id)wtwLocations;
- (void)setWtwLocations:;
+ (Class)wtwLocationType;
@end
