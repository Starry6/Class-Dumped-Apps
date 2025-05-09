@interface GEOTransitSegmentArtworkSet : PBCodable
@property (nonatomic) Q artworkIndexsCount;
@property (nonatomic) ^I artworkIndexs;
@property (nonatomic) NSMutableArray clusters;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
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
- (unsigned long long)artworkIndexsCount;
- (id)artworkIndexs;
- (void)clearArtworkIndexs;
- (void)addArtworkIndex:;
- (unsigned int)artworkIndexAtIndex:;
- (void)setArtworkIndexs:count:;
- (id)clusters;
- (void)setClusters:;
- (void)clearClusters;
- (void)addCluster:;
- (unsigned long long)clustersCount;
- (id)clusterAtIndex:;
+ (BOOL)isValid:;
+ (Class)clusterType;
@end
