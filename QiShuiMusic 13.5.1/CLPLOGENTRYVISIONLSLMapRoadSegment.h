@interface CLPLOGENTRYVISIONLSLMapRoadSegment : PBCodable
@property (nonatomic) BOOL hasRoadId;
@property (nonatomic) Q roadId;
@property (nonatomic) NSMutableArray polylines;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)polylines;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setPolylines:;
- (void)setRoadId:;
- (void)setHasRoadId:;
- (BOOL)hasRoadId;
- (void)clearPolylines;
- (void)addPolylines:;
- (unsigned long long)polylinesCount;
- (id)polylinesAtIndex:;
- (unsigned long long)roadId;
+ (Class)polylinesType;
@end
