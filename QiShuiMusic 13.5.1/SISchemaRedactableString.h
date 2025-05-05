@interface SISchemaRedactableString : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger redactionState;
@property (nonatomic) BOOL hasRedactionState;
@property (nonatomic) NSString value;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q which_String;
- (BOOL)hasValue;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasValue:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteValue;
- (void)setRedactionState:;
- (int)redactionState;
- (void)deleteRedactionState;
- (unsigned long long)which_String;
- (BOOL)hasRedactionState;
- (void)setHasRedactionState:;
@end
