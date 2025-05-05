@interface PAPBApplication : PBCodable
@property (nonatomic) BOOL hasIdentifierType;
@property (nonatomic) NSInteger identifierType;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) NSString identifier;
- (void)setIdentifierType:;
- (id)identifier;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasIdentifier;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (int)identifierType;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasIdentifierType:;
- (BOOL)hasIdentifierType;
@end
