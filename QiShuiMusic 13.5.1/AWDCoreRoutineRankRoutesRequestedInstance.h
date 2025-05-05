@interface AWDCoreRoutineRankRoutesRequestedInstance : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasNumberOfInputRoutes;
@property (nonatomic) NSInteger numberOfInputRoutes;
@property (nonatomic) BOOL hasHighestRankedRouteScore;
@property (nonatomic) NSInteger highestRankedRouteScore;
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
- (void)setNumberOfInputRoutes:;
- (void)setHasNumberOfInputRoutes:;
- (BOOL)hasNumberOfInputRoutes;
- (void)setHighestRankedRouteScore:;
- (void)setHasHighestRankedRouteScore:;
- (BOOL)hasHighestRankedRouteScore;
- (int)numberOfInputRoutes;
- (int)highestRankedRouteScore;
@end
