@interface SISchemaDictationEndPointStop : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger dictationEndPointType;
@property (nonatomic) BOOL hasDictationEndPointType;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setDictationEndPointType:;
- (BOOL)hasDictationEndPointType;
- (void)setHasDictationEndPointType:;
- (void)deleteDictationEndPointType;
- (int)dictationEndPointType;
@end
