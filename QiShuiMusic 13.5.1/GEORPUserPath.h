@interface GEORPUserPath : PBCodable
@property (nonatomic) Q nativePathsCount;
@property (nonatomic) ^i nativePaths;
@property (nonatomic) NSMutableArray webPaths;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
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
- (unsigned long long)nativePathsCount;
- (id)nativePaths;
- (void)clearNativePaths;
- (void)addNativePath:;
- (int)nativePathAtIndex:;
- (void)setNativePaths:count:;
- (id)nativePathsAsString:;
- (int)StringAsNativePaths:;
- (id)webPaths;
- (void)setWebPaths:;
- (void)clearWebPaths;
- (void)addWebPath:;
- (unsigned long long)webPathsCount;
- (id)webPathAtIndex:;
+ (BOOL)isValid:;
+ (Class)webPathType;
@end
