@interface GEORPFeedbackPhotoMetadata : PBCodable
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL hasUrl;
@property (nonatomic) NSString url;
- (void)readAll:;
- (id)url;
- (id)init;
- (BOOL)hasUrl;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (id)identifier;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasIdentifier;
- (void)setUrl:;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
