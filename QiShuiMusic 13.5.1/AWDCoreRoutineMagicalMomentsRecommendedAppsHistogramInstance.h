@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramInstance : PBCodable
@property (nonatomic) BOOL hasBundleId;
@property (nonatomic) NSString bundleId;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) NSInteger rank;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) NSInteger confidence;
- (int)confidence;
- (BOOL)hasBundleId;
- (void)setConfidence:;
- (void)dealloc;
- (id)bundleId;
- (void)writeTo:;
- (unsigned long long)hash;
- (int)rank;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setRank:;
- (void)setBundleId:;
- (BOOL)hasRank;
- (BOOL)isEqual:;
- (void)setHasRank:;
- (id)copyWithZone:;
- (void)setHasConfidence:;
- (BOOL)hasConfidence;
@end
