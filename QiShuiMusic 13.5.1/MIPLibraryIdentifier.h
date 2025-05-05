@interface MIPLibraryIdentifier : PBCodable
@property (nonatomic) BOOL hasLibraryName;
@property (nonatomic) NSString libraryName;
@property (nonatomic) BOOL hasLibraryId;
@property (nonatomic) q libraryId;
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
- (long long)libraryId;
- (id)libraryName;
- (BOOL)hasLibraryName;
- (void)setLibraryId:;
- (void)setHasLibraryId:;
- (BOOL)hasLibraryId;
- (void)setLibraryName:;
@end
