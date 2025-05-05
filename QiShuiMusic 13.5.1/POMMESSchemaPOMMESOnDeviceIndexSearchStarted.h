@interface POMMESSchemaPOMMESOnDeviceIndexSearchStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSData jsonData;
- (void)setName:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (BOOL)hasName;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (int)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasName:;
- (void)deleteName;
@end
