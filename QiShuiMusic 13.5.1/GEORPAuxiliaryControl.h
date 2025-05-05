@interface GEORPAuxiliaryControl : PBCodable
@property (nonatomic) BOOL hasWatch;
@property (nonatomic) GEORPWatchAuxiliaryControl watch;
@property (nonatomic) BOOL hasCar;
@property (nonatomic) GEORPCarPlayAuxiliaryControl car;
- (void)readAll:;
- (id)watch;
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
- (BOOL)hasWatch;
- (void)setWatch:;
- (BOOL)hasCar;
- (id)car;
- (void)setCar:;
+ (BOOL)isValid:;
@end
