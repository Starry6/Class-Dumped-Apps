@interface TRITrialMobileAssetOriginFields : PBCodable
@property (nonatomic) BOOL hasIsMobileAsset;
@property (nonatomic) BOOL isMobileAsset;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setIsMobileAsset:;
- (void)setHasIsMobileAsset:;
- (BOOL)hasIsMobileAsset;
- (BOOL)isMobileAsset;
@end
