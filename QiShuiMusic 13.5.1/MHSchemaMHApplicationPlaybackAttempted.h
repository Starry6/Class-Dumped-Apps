@interface MHSchemaMHApplicationPlaybackAttempted : SISchemaInstrumentationMessage
@property (nonatomic) NSString appBundleName;
@property (nonatomic) BOOL hasAppBundleName;
@property (nonatomic) NSString appBundleVersion;
@property (nonatomic) BOOL hasAppBundleVersion;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasAppBundleName;
- (void)deleteAppBundleName;
- (BOOL)hasAppBundleVersion;
- (void)deleteAppBundleVersion;
- (id)appBundleName;
- (void)setAppBundleName:;
- (id)appBundleVersion;
- (void)setAppBundleVersion:;
- (void)setHasAppBundleName:;
- (void)setHasAppBundleVersion:;
@end
