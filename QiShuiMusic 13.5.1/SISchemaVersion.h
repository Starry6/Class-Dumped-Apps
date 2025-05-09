@interface SISchemaVersion : SISchemaInstrumentationMessage
@property (nonatomic) I major;
@property (nonatomic) BOOL hasMajor;
@property (nonatomic) I minor;
@property (nonatomic) BOOL hasMinor;
@property (nonatomic) I patch;
@property (nonatomic) BOOL hasPatch;
@property (nonatomic) NSString prerelease;
@property (nonatomic) BOOL hasPrerelease;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (unsigned int)major;
- (id)dictionaryRepresentation;
- (unsigned int)minor;
- (BOOL)isEqual:;
- (void)setMajor:;
- (void)setMinor:;
- (BOOL)hasMajor;
- (void)setHasMajor:;
- (void)deleteMajor;
- (BOOL)hasMinor;
- (void)setHasMinor:;
- (void)deleteMinor;
- (void)setPatch:;
- (BOOL)hasPatch;
- (void)setHasPatch:;
- (void)deletePatch;
- (BOOL)hasPrerelease;
- (void)deletePrerelease;
- (unsigned int)patch;
- (id)prerelease;
- (void)setPrerelease:;
- (void)setHasPrerelease:;
@end
