@interface SISchemaSiriCue : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger siriCueType;
@property (nonatomic) BOOL hasSiriCueType;
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
- (void)setSiriCueType:;
- (BOOL)hasSiriCueType;
- (void)setHasSiriCueType:;
- (void)deleteSiriCueType;
- (int)siriCueType;
@end
