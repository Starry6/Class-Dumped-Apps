@interface SGM2DDLinkShown : PBCodable
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL hasInterface;
@property (nonatomic) NSInteger interface;
- (BOOL)hasKey;
- (int)interface;
- (void)setInterface:;
- (id)key;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setKey:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasInterface;
- (void)setHasInterface:;
- (id)interfaceAsString:;
- (int)StringAsInterface:;
@end
