@interface GEOWalletCategoryMapping : PBCodable
@property (nonatomic) BOOL hasWalletCategory;
@property (nonatomic) NSString walletCategory;
@property (nonatomic) BOOL hasStylesAttributes;
@property (nonatomic) GEOStyleAttributes stylesAttributes;
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
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasWalletCategory;
- (id)walletCategory;
- (void)setWalletCategory:;
- (BOOL)hasStylesAttributes;
- (id)stylesAttributes;
- (void)setStylesAttributes:;
+ (BOOL)isValid:;
@end
