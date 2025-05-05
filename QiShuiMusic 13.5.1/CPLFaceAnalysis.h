@interface CPLFaceAnalysis : PBCodable
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;
@property (nonatomic) NSMutableArray faceInstances;
- (void)setCompleted:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)completed;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasCompleted:;
- (BOOL)hasCompleted;
- (void)clearFaceInstances;
- (void)addFaceInstances:;
- (unsigned long long)faceInstancesCount;
- (id)faceInstancesAtIndex:;
- (id)faceInstances;
- (void)setFaceInstances:;
+ (Class)faceInstancesType;
@end
