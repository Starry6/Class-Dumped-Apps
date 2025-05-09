@interface VCMediaNegotiationBlobV2CameraSettingsU1 : PBCodable
@property (nonatomic) VCVideoRuleCollections videoRuleCollections;
@property (nonatomic) {CGSize=dd} orientationMismatchDisplayRatio;
@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) I rtpSSRC;
@property (nonatomic) NSMutableArray payloads;
@property (nonatomic) BOOL hasLandscapeAspectRatioX;
@property (nonatomic) I landscapeAspectRatioX;
@property (nonatomic) BOOL hasLandscapeAspectRatioY;
@property (nonatomic) I landscapeAspectRatioY;
@property (nonatomic) BOOL hasPortraitAspectRatioX;
@property (nonatomic) I portraitAspectRatioX;
@property (nonatomic) BOOL hasPortraitAspectRatioY;
@property (nonatomic) I portraitAspectRatioY;
@property (nonatomic) BOOL hasMismatchedDisplayAspectRatioX;
@property (nonatomic) I mismatchedDisplayAspectRatioX;
@property (nonatomic) BOOL hasMismatchedDisplayAspectRatioY;
@property (nonatomic) I mismatchedDisplayAspectRatioY;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)payloads;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setPayloads:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)rtpSSRC;
- (void)setRtpSSRC:;
- (void)clearPayloads;
- (void)addPayloads:;
- (unsigned long long)payloadsCount;
- (id)payloadsAtIndex:;
- (id)videoRuleCollections;
- (void)setHasRtpSSRC:;
- (BOOL)hasRtpSSRC;
- (void)setLandscapeAspectRatioX:;
- (void)setHasLandscapeAspectRatioX:;
- (BOOL)hasLandscapeAspectRatioX;
- (void)setLandscapeAspectRatioY:;
- (void)setHasLandscapeAspectRatioY:;
- (BOOL)hasLandscapeAspectRatioY;
- (void)setPortraitAspectRatioX:;
- (void)setHasPortraitAspectRatioX:;
- (BOOL)hasPortraitAspectRatioX;
- (void)setPortraitAspectRatioY:;
- (void)setHasPortraitAspectRatioY:;
- (BOOL)hasPortraitAspectRatioY;
- (void)setMismatchedDisplayAspectRatioX:;
- (void)setHasMismatchedDisplayAspectRatioX:;
- (BOOL)hasMismatchedDisplayAspectRatioX;
- (void)setMismatchedDisplayAspectRatioY:;
- (void)setHasMismatchedDisplayAspectRatioY:;
- (BOOL)hasMismatchedDisplayAspectRatioY;
- (unsigned int)landscapeAspectRatioX;
- (unsigned int)landscapeAspectRatioY;
- (unsigned int)portraitAspectRatioX;
- (unsigned int)portraitAspectRatioY;
- (unsigned int)mismatchedDisplayAspectRatioX;
- (unsigned int)mismatchedDisplayAspectRatioY;
- (id)initWithSSRC:videoRuleCollections:screenSize:aspectRatioPortrait:aspectRatioLandscape:orientationMismatchAspectRatioLandscape:;
- (void)aspectRatioPortrait:aspectRatioLandscape:orientationMismatchAspectRatioLandscape:orientationMismatchAspectRatioPortrait:screenSize:;
- (id)orientationMismatchDisplayRatio;
- (BOOL)addVideoRules:encodingType:payload:videoRuleCollections:;
- (void)printWithLogFile:prefix:screenSize:;
- (id)rulesForEncodeType:paylaod:videoRuleCollection:;
- (BOOL)setupVideoRuleCollection:;
+ (Class)payloadsType;
@end
