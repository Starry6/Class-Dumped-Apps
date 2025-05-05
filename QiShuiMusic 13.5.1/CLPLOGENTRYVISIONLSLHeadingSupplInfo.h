@interface CLPLOGENTRYVISIONLSLHeadingSupplInfo : PBCodable
@property (nonatomic) BOOL hasRoadSegment;
@property (nonatomic) CLPLOGENTRYVISIONLSLMapRoadSegment roadSegment;
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
- (id)roadSegment;
- (void)setRoadSegment:;
- (BOOL)hasRoadSegment;
@end
