@interface ICIAMApplicationBadge : PBCodable
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL hasBundleIdentifier;
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (id)identifier;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasIdentifier;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setBundleIdentifier:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBundleIdentifier;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
