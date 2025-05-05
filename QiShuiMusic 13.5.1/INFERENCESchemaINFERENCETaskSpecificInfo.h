@interface INFERENCESchemaINFERENCETaskSpecificInfo : SISchemaInstrumentationMessage
@property (nonatomic) INFERENCESchemaINFERENCELongRunningTaskInfo longRunningTaskInfo;
@property (nonatomic) BOOL hasLongRunningTaskInfo;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q whichTaskinfo;
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
- (void)setLongRunningTaskInfo:;
- (id)longRunningTaskInfo;
- (void)deleteLongRunningTaskInfo;
- (unsigned long long)whichTaskinfo;
- (BOOL)hasLongRunningTaskInfo;
- (void)setHasLongRunningTaskInfo:;
@end
