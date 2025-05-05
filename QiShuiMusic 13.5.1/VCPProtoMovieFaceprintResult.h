@interface VCPProtoMovieFaceprintResult : PBCodable
@property (nonatomic) I faceID;
@property (nonatomic) NSData faceprintBlob;
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
- (unsigned int)faceID;
- (void)setFaceID:;
- (id)exportToLegacyDictionary;
- (id)faceprintBlob;
- (void)setFaceprintBlob:;
+ (id)resultFromLegacyDictionary:;
@end
