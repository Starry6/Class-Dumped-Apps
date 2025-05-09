@interface GEOLogMsgStateApplicationIdentifier : PBCodable
@property (nonatomic) BOOL hasAppIdentifier;
@property (nonatomic) NSString appIdentifier;
@property (nonatomic) BOOL hasAppMajorVersion;
@property (nonatomic) NSString appMajorVersion;
@property (nonatomic) BOOL hasAppMinorVersion;
@property (nonatomic) NSString appMinorVersion;
@property (nonatomic) BOOL hasAppDarkMode;
@property (nonatomic) BOOL appDarkMode;
- (BOOL)hasAppIdentifier;
- (void)setAppIdentifier:;
- (id)appIdentifier;
- (void)setAppMinorVersion:;
- (void)setHasAppDarkMode:;
- (void)readAll:;
- (id)appMajorVersion;
- (BOOL)hasAppMinorVersion;
- (void)setAppDarkMode:;
- (BOOL)appDarkMode;
- (BOOL)hasAppMajorVersion;
- (void)setAppMajorVersion:;
- (BOOL)hasAppDarkMode;
- (id)appMinorVersion;
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
+ (BOOL)isValid:;
@end
