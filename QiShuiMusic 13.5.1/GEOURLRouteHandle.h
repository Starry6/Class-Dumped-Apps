@interface GEOURLRouteHandle : PBCodable
@property (nonatomic) BOOL hasDirectionsResponseID;
@property (nonatomic) NSData directionsResponseID;
@property (nonatomic) BOOL hasRouteID;
@property (nonatomic) NSData routeID;
@property (nonatomic) BOOL hasZilchPoints;
@property (nonatomic) NSData zilchPoints;
@property (nonatomic) BOOL hasTransitData;
@property (nonatomic) NSData transitData;
- (void)readAll:;
- (id)routeID;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)zilchPoints;
- (void)setZilchPoints:;
- (id)directionsResponseID;
- (BOOL)hasRouteID;
- (void)setRouteID:;
- (BOOL)hasZilchPoints;
- (BOOL)hasDirectionsResponseID;
- (void)setDirectionsResponseID:;
- (BOOL)hasTransitData;
- (id)transitData;
- (void)setTransitData:;
+ (BOOL)isValid:;
@end
