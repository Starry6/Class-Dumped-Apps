@interface ANCSchemaANCBackgroundContent : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL isFocusModeEnabled;
@property (nonatomic) BOOL hasIsFocusModeEnabled;
@property (nonatomic) NSData jsonData;
- (BOOL)hasMediaType;
- (int)mediaType;
- (void)setMediaType:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setHasMediaType:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteMediaType;
- (void)setIsFocusModeEnabled:;
- (BOOL)hasIsFocusModeEnabled;
- (void)setHasIsFocusModeEnabled:;
- (void)deleteIsFocusModeEnabled;
- (BOOL)isFocusModeEnabled;
@end
