@interface NWPBUpdateBrowse : PBCodable
@property (nonatomic) BOOL hasClientUUID;
@property (nonatomic) NSString clientUUID;
@property (nonatomic) NSMutableArray discoveredEndpoints;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setClientUUID:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)clientUUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasClientUUID;
- (void)clearDiscoveredEndpoints;
- (void)addDiscoveredEndpoints:;
- (unsigned long long)discoveredEndpointsCount;
- (id)discoveredEndpointsAtIndex:;
- (id)discoveredEndpoints;
- (void)setDiscoveredEndpoints:;
+ (Class)discoveredEndpointsType;
@end
