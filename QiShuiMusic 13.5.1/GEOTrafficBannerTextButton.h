@interface GEOTrafficBannerTextButton : PBCodable
@property (nonatomic) BOOL hasText;
@property (nonatomic) GEOFormattedString text;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) NSInteger action;
@property (nonatomic) BOOL hasButtonDisplay;
@property (nonatomic) NSInteger buttonDisplay;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (BOOL)hasText;
- (id)jsonRepresentation;
- (void)setText:;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (int)action;
- (unsigned long long)hash;
- (void)setAction:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasAction;
- (void)setHasAction:;
- (id)actionAsString:;
- (int)StringAsAction:;
- (int)buttonDisplay;
- (void)setButtonDisplay:;
- (void)setHasButtonDisplay:;
- (BOOL)hasButtonDisplay;
- (id)buttonDisplayAsString:;
- (int)StringAsButtonDisplay:;
+ (BOOL)isValid:;
@end
