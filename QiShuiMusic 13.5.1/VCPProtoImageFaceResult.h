@interface VCPProtoImageFaceResult : PBCodable
@property (nonatomic) NSInteger eyeExpression;
@property (nonatomic) NSInteger mouthExpression;
@property (nonatomic) NSInteger yaw;
@property (nonatomic) NSInteger position;
@property (nonatomic) VCPProtoBounds bounds;
@property (nonatomic) BOOL isCloseup;
@property (nonatomic) BOOL hasFaceQuality;
@property (nonatomic) float faceQuality;
- (void)setPosition:;
- (int)yaw;
- (int)position;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setBounds:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)bounds;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setYaw:;
- (id)exportToLegacyDictionary;
- (void)setFaceQuality:;
- (void)setHasFaceQuality:;
- (BOOL)hasFaceQuality;
- (int)eyeExpression;
- (void)setEyeExpression:;
- (int)mouthExpression;
- (void)setMouthExpression:;
- (BOOL)isCloseup;
- (void)setIsCloseup:;
- (float)faceQuality;
+ (id)resultFromLegacyDictionary:;
@end
