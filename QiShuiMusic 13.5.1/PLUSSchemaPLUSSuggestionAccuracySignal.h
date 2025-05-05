@interface PLUSSchemaPLUSSuggestionAccuracySignal : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger signalType;
@property (nonatomic) BOOL hasSignalType;
@property (nonatomic) NSInteger signalSource;
@property (nonatomic) BOOL hasSignalSource;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (int)signalSource;
- (BOOL)readFrom:;
- (void)setSignalSource:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setSignalType:;
- (BOOL)hasSignalType;
- (void)setHasSignalType:;
- (void)deleteSignalType;
- (int)signalType;
- (BOOL)hasSignalSource;
- (void)setHasSignalSource:;
- (void)deleteSignalSource;
@end
