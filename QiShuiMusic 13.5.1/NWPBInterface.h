@interface NWPBInterface : PBCodable
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasSubtype;
@property (nonatomic) NSInteger subtype;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) I index;
@property (nonatomic) BOOL hasGeneration;
@property (nonatomic) I generation;
@property (nonatomic) BOOL hasDelegateIndex;
@property (nonatomic) I delegateIndex;
@property (nonatomic) BOOL hasMtu;
@property (nonatomic) I mtu;
@property (nonatomic) BOOL hasExpensive;
@property (nonatomic) BOOL expensive;
- (unsigned int)mtu;
- (int)subtype;
- (void)setName:;
- (BOOL)hasName;
- (int)StringAsType:;
- (BOOL)hasSubtype;
- (void)setType:;
- (void)writeTo:;
- (void)setSubtype:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)typeAsString:;
- (unsigned int)index;
- (void)mergeFrom:;
- (int)type;
- (void)setGeneration:;
- (void)setIndex:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setExpensive:;
- (id)name;
- (id)dictionaryRepresentation;
- (unsigned int)generation;
- (BOOL)expensive;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasSubtype:;
- (id)subtypeAsString:;
- (int)StringAsSubtype:;
- (void)setHasIndex:;
- (BOOL)hasIndex;
- (void)setHasGeneration:;
- (BOOL)hasGeneration;
- (void)setDelegateIndex:;
- (void)setHasDelegateIndex:;
- (BOOL)hasDelegateIndex;
- (void)setMtu:;
- (void)setHasMtu:;
- (BOOL)hasMtu;
- (void)setHasExpensive:;
- (BOOL)hasExpensive;
- (unsigned int)delegateIndex;
@end
