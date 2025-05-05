@interface AWDCoreRoutineModelClusterStandardDeviationInstance : PBCodable
@property (nonatomic) BOOL hasEntryStandardDeviation;
@property (nonatomic) NSInteger entryStandardDeviation;
@property (nonatomic) BOOL hasExitStandardDeviation;
@property (nonatomic) NSInteger exitStandardDeviation;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setEntryStandardDeviation:;
- (void)setHasEntryStandardDeviation:;
- (BOOL)hasEntryStandardDeviation;
- (void)setExitStandardDeviation:;
- (void)setHasExitStandardDeviation:;
- (BOOL)hasExitStandardDeviation;
- (int)entryStandardDeviation;
- (int)exitStandardDeviation;
@end
