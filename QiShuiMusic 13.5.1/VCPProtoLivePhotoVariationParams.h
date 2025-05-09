@interface VCPProtoLivePhotoVariationParams : PBCodable
@property (nonatomic) NSInteger errorCode;
@property (nonatomic) BOOL hasLoopFadeLen;
@property (nonatomic) NSInteger loopFadeLen;
@property (nonatomic) BOOL hasLoopPeriod;
@property (nonatomic) NSInteger loopPeriod;
@property (nonatomic) BOOL hasLoopStart;
@property (nonatomic) NSInteger loopStart;
- (int)errorCode;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setErrorCode:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)loopStart;
- (int)loopPeriod;
- (id)exportToLegacyDictionary;
- (void)setLoopFadeLen:;
- (void)setHasLoopFadeLen:;
- (BOOL)hasLoopFadeLen;
- (void)setLoopPeriod:;
- (void)setHasLoopPeriod:;
- (BOOL)hasLoopPeriod;
- (void)setLoopStart:;
- (void)setHasLoopStart:;
- (BOOL)hasLoopStart;
- (int)loopFadeLen;
+ (id)resultFromLegacyDictionary:;
@end
