@interface VCPProtoLivePhotoKeyFrameFaceResult : PBCodable
@property (nonatomic) VCPProtoBounds faceBounds;
@property (nonatomic) float faceQuality;
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
- (id)exportToLegacyDictionary;
- (void)setFaceQuality:;
- (float)faceQuality;
- (id)faceBounds;
- (void)setFaceBounds:;
+ (id)resultFromLegacyDictionary:;
@end
