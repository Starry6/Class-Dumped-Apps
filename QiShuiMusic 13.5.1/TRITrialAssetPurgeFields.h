@interface TRITrialAssetPurgeFields : PBCodable
@property (nonatomic) BOOL hasPurgeabilityLevel;
@property (nonatomic) NSInteger purgeabilityLevel;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (int)purgeabilityLevel;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setPurgeabilityLevel:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasPurgeabilityLevel:;
- (BOOL)hasPurgeabilityLevel;
- (id)purgeabilityLevelAsString:;
- (int)StringAsPurgeabilityLevel:;
+ (int)assetPurgeFieldsPurgeabilityLevelFromPurgeabilityLevel:;
@end
