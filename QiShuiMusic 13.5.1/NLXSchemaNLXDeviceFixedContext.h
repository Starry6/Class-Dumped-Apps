@interface NLXSchemaNLXDeviceFixedContext : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isTestEvent;
@property (nonatomic) BOOL hasIsTestEvent;
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
- (void)setIsTestEvent:;
- (BOOL)hasIsTestEvent;
- (void)setHasIsTestEvent:;
- (void)deleteIsTestEvent;
- (BOOL)isTestEvent;
@end
