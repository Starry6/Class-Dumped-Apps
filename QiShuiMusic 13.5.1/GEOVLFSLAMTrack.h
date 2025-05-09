@interface GEOVLFSLAMTrack : PBCodable
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) GEOVLFPoint3D position;
@property (nonatomic) Q descriptorsCount;
@property (nonatomic) ^I descriptors;
@property (nonatomic) Q observationImageIndicesCount;
@property (nonatomic) ^I observationImageIndices;
@property (nonatomic) NSMutableArray imagePositions;
- (void)setPosition:;
- (void)readAll:;
- (id)descriptors;
- (id)position;
- (id)init;
- (void)dealloc;
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
- (BOOL)hasPosition;
- (unsigned long long)descriptorsCount;
- (void)clearDescriptors;
- (void)addDescriptors:;
- (unsigned int)descriptorsAtIndex:;
- (void)setDescriptors:count:;
- (unsigned long long)observationImageIndicesCount;
- (id)observationImageIndices;
- (void)clearObservationImageIndices;
- (void)addObservationImageIndices:;
- (unsigned int)observationImageIndicesAtIndex:;
- (void)setObservationImageIndices:count:;
- (id)imagePositions;
- (void)setImagePositions:;
- (void)clearImagePositions;
- (void)addImagePositions:;
- (unsigned long long)imagePositionsCount;
- (id)imagePositionsAtIndex:;
+ (BOOL)isValid:;
+ (Class)imagePositionsType;
@end
