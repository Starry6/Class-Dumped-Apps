@interface VCPProtoMovieHumanActionResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) float absoluteScore;
@property (nonatomic) float relativeScore;
@property (nonatomic) float humanScore;
@property (nonatomic) BOOL hasFaceId;
@property (nonatomic) NSString faceId;
@property (nonatomic) BOOL hasBounds;
@property (nonatomic) VCPProtoBounds bounds;
- (id)timeRange;
- (void)writeTo:;
- (BOOL)hasBounds;
- (unsigned long long)hash;
- (void)setTimeRange:;
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
- (id)faceId;
- (void)setFaceId:;
- (id)exportToLegacyDictionary;
- (BOOL)hasFaceId;
- (float)absoluteScore;
- (void)setAbsoluteScore:;
- (float)relativeScore;
- (void)setRelativeScore:;
- (float)humanScore;
- (void)setHumanScore:;
+ (id)resultFromLegacyDictionary:;
@end
