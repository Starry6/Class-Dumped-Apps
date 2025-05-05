@interface BMPBPOICategoryEvent : PBCodable
@property (nonatomic) BOOL hasPoiCategory;
@property (nonatomic) NSString poiCategory;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) I rank;
@property (nonatomic) BOOL hasTimeIntervalSince1970;
@property (nonatomic) double timeIntervalSince1970;
- (void)setTimeIntervalSince1970:;
- (void)setPoiCategory:;
- (void)writeTo:;
- (unsigned long long)hash;
- (unsigned int)rank;
- (id)poiCategory;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)hasPoiCategory;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (double)timeIntervalSince1970;
- (id)dictionaryRepresentation;
- (void)setRank:;
- (BOOL)hasRank;
- (BOOL)isEqual:;
- (BOOL)hasTimeIntervalSince1970;
- (void)setHasRank:;
- (void)setHasTimeIntervalSince1970:;
- (id)copyWithZone:;
@end
