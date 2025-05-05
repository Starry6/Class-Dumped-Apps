@interface NSPPrivacyProxyResolverInfo : PBCodable
@property (nonatomic) BOOL hasDohURL;
@property (nonatomic) NSString dohURL;
@property (nonatomic) BOOL hasObliviousDoHConfig;
@property (nonatomic) NSData obliviousDoHConfig;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) I weight;
- (id)dohURL;
- (unsigned int)weight;
- (BOOL)hasWeight;
- (void)writeTo:;
- (void)setWeight:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (BOOL)hasObliviousDoHConfig;
- (id)description;
- (BOOL)hasDohURL;
- (id)dictionaryRepresentation;
- (id)obliviousDoHConfig;
- (void)setHasWeight:;
- (BOOL)isEqual:;
- (void)setDohURL:;
- (id)copyWithZone:;
- (void)setObliviousDoHConfig:;
@end
