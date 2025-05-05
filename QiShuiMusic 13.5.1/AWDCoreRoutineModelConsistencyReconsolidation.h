@interface AWDCoreRoutineModelConsistencyReconsolidation : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasCountOfReconsolidatedLOIs;
@property (nonatomic) NSInteger countOfReconsolidatedLOIs;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setCountOfReconsolidatedLOIs:;
- (void)setHasCountOfReconsolidatedLOIs:;
- (BOOL)hasCountOfReconsolidatedLOIs;
- (int)countOfReconsolidatedLOIs;
@end
