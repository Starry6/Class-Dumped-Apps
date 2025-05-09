@interface GEOFormatStyle : PBCodable
@property (nonatomic) q styleType;
@property (nonatomic) NSString token;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasToken;
@property (nonatomic) NSString token;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)token;
- (id)jsonRepresentation;
- (int)StringAsType:;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (long long)styleType;
- (void)copyTo:;
- (id)typeAsString:;
- (void)mergeFrom:;
- (void)setToken:;
- (int)type;
- (BOOL)hasToken;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
