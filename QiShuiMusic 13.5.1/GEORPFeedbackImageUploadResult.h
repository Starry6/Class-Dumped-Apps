@interface GEORPFeedbackImageUploadResult : PBCodable
@property (nonatomic) NSMutableArray imageUploadInfos;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
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
- (id)imageUploadInfos;
- (void)setImageUploadInfos:;
- (void)clearImageUploadInfos;
- (void)addImageUploadInfo:;
- (unsigned long long)imageUploadInfosCount;
- (id)imageUploadInfoAtIndex:;
+ (BOOL)isValid:;
+ (Class)imageUploadInfoType;
@end
