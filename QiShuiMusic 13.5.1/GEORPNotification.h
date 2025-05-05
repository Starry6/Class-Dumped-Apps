@interface GEORPNotification : PBCodable
@property (nonatomic) BOOL hasLocalizedTitle;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) BOOL hasLocalizedText;
@property (nonatomic) NSString localizedText;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)localizedTitle;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setLocalizedTitle:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasLocalizedText;
- (id)localizedText;
- (void)setLocalizedText:;
- (BOOL)hasLocalizedTitle;
+ (BOOL)isValid:;
@end
