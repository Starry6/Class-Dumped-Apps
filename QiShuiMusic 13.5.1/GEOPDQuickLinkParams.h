@interface GEOPDQuickLinkParams : PBCodable
@property (nonatomic) BOOL hasQuickLinkItemIndex;
@property (nonatomic) NSInteger quickLinkItemIndex;
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
- (int)quickLinkItemIndex;
- (void)setQuickLinkItemIndex:;
- (void)setHasQuickLinkItemIndex:;
- (BOOL)hasQuickLinkItemIndex;
+ (BOOL)isValid:;
@end
