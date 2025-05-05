@interface CLPLocationConsumptionScoreInfoRequest : PBRequest
@property (nonatomic) NSMutableArray locationConsumptionScoreInfos;
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
- (void)clearLocationConsumptionScoreInfos;
- (void)addLocationConsumptionScoreInfo:;
- (unsigned long long)locationConsumptionScoreInfosCount;
- (id)locationConsumptionScoreInfoAtIndex:;
- (id)locationConsumptionScoreInfos;
- (void)setLocationConsumptionScoreInfos:;
+ (Class)locationConsumptionScoreInfoType;
@end
