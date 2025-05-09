@interface CKDPDistributedTimestampsSiteVersionVectors : PBCodable
@property (nonatomic) BOOL hasPreviousVector;
@property (nonatomic) CKDPDistributedTimestampsVersionVector previousVector;
@property (nonatomic) BOOL hasContentsVector;
@property (nonatomic) CKDPDistributedTimestampsVersionVector contentsVector;
@property (nonatomic) BOOL hasRemovalsVector;
@property (nonatomic) CKDPDistributedTimestampsVersionVector removalsVector;
@property (nonatomic) BOOL hasDependenciesVector;
@property (nonatomic) CKDPDistributedTimestampsVersionVector dependenciesVector;
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
- (id)previousVector;
- (id)removalsVector;
- (id)contentsVector;
- (id)dependenciesVector;
- (BOOL)hasPreviousVector;
- (BOOL)hasContentsVector;
- (BOOL)hasRemovalsVector;
- (BOOL)hasDependenciesVector;
- (void)setPreviousVector:;
- (void)setContentsVector:;
- (void)setRemovalsVector:;
- (void)setDependenciesVector:;
@end
