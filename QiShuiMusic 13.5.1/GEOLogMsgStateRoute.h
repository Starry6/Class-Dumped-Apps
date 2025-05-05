@interface GEOLogMsgStateRoute : PBCodable
@property (nonatomic) BOOL hasRouteDetails;
@property (nonatomic) GEORouteDetails routeDetails;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
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
- (BOOL)hasRouteDetails;
- (id)routeDetails;
- (void)setRouteDetails:;
+ (BOOL)isValid:;
@end
