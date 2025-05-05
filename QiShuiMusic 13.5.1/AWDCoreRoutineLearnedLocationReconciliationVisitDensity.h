@interface AWDCoreRoutineLearnedLocationReconciliationVisitDensity : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasTotalBranchCount;
@property (nonatomic) NSInteger totalBranchCount;
@property (nonatomic) BOOL hasCountDeviceLost;
@property (nonatomic) NSInteger countDeviceLost;
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
- (void)setTotalBranchCount:;
- (void)setHasTotalBranchCount:;
- (BOOL)hasTotalBranchCount;
- (void)setCountDeviceLost:;
- (void)setHasCountDeviceLost:;
- (BOOL)hasCountDeviceLost;
- (int)totalBranchCount;
- (int)countDeviceLost;
@end
