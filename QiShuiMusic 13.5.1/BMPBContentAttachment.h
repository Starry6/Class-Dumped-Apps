@interface BMPBContentAttachment : PBCodable
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL hasFilename;
@property (nonatomic) NSString filename;
@property (nonatomic) BOOL hasPath;
@property (nonatomic) NSString path;
- (id)path;
- (id)filename;
- (void)setPath:;
- (void)setType:;
- (void)writeTo:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)setFilename:;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)type;
- (BOOL)hasFilename;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPath;
@end
