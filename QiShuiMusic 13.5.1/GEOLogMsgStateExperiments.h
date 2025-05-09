@interface GEOLogMsgStateExperiments : PBCodable
@property (nonatomic) BOOL hasTilesAbExperimentAssignment;
@property (nonatomic) GEOABExperimentAssignment tilesAbExperimentAssignment;
@property (nonatomic) BOOL hasClientAbExperimentAssignment;
@property (nonatomic) GEOABClientConfig clientAbExperimentAssignment;
@property (nonatomic) BOOL hasDatasetAbStatus;
@property (nonatomic) GEOPDDatasetABStatus datasetAbStatus;
@property (nonatomic) BOOL hasAbAssignInfo;
@property (nonatomic) GEOAbAssignInfo abAssignInfo;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setTilesAbExperimentAssignment:;
- (unsigned long long)hash;
- (BOOL)hasTilesAbExperimentAssignment;
- (void)copyTo:;
- (void)setAbAssignInfo:;
- (void)mergeFrom:;
- (BOOL)hasAbAssignInfo;
- (void)setDatasetAbStatus:;
- (void)setClientAbExperimentAssignment:;
- (id)initWithData:;
- (BOOL)hasDatasetAbStatus;
- (void).cxx_destruct;
- (id)datasetAbStatus;
- (BOOL)readFrom:;
- (id)clientAbExperimentAssignment;
- (id)description;
- (BOOL)hasClientAbExperimentAssignment;
- (id)dictionaryRepresentation;
- (id)tilesAbExperimentAssignment;
- (id)abAssignInfo;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
