@interface SISchemaUIStatePresenting : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger presentationType;
@property (nonatomic) BOOL hasPresentationType;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (void)setPresentationType:;
- (int)presentationType;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasPresentationType;
- (void)setHasPresentationType:;
- (void)deletePresentationType;
@end
