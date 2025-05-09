@interface VCPProtoLivePhotoFrameInstruction : PBCodable
@property (nonatomic) q timeValue;
@property (nonatomic) Q homographyParamsCount;
@property (nonatomic) ^f homographyParams;
@property (nonatomic) NSInteger timeScale;
@property (nonatomic) q epoch;
@property (nonatomic) NSInteger flags;
- (void)dealloc;
- (void)setEpoch:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (int)timeScale;
- (long long)epoch;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (void)setFlags:;
- (id)dictionaryRepresentation;
- (int)flags;
- (void)setTimeScale:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)timeValue;
- (void)setTimeValue:;
- (id)exportToLegacyDictionary;
- (unsigned long long)homographyParamsCount;
- (id)homographyParams;
- (void)clearHomographyParams;
- (void)addHomographyParam:;
- (float)homographyParamAtIndex:;
- (void)setHomographyParams:count:;
+ (id)resultFromLegacyDictionary:;
@end
