@interface GRRSchemaGRRStringList : SISchemaInstrumentationMessage
@property (nonatomic) NSArray stringNames;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearStringName;
- (void)deleteStringName;
- (void)addStringName:;
- (unsigned long long)stringNameCount;
- (id)stringNameAtIndex:;
- (id)stringNames;
- (void)setStringNames:;
@end
