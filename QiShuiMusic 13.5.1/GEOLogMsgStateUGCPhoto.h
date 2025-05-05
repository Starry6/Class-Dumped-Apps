@interface GEOLogMsgStateUGCPhoto : PBCodable
@property (nonatomic) Q photoSourcesCount;
@property (nonatomic) ^i photoSources;
- (void)readAll:;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)photoSourcesCount;
- (id)photoSources;
- (void)clearPhotoSources;
- (void)addPhotoSource:;
- (int)photoSourceAtIndex:;
- (void)setPhotoSources:count:;
- (id)photoSourcesAsString:;
- (int)StringAsPhotoSources:;
+ (BOOL)isValid:;
@end
