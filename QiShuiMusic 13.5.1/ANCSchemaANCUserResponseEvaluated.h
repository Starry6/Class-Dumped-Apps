@interface ANCSchemaANCUserResponseEvaluated : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger userResponseCategory;
@property (nonatomic) BOOL hasUserResponseCategory;
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
- (void)setUserResponseCategory:;
- (BOOL)hasUserResponseCategory;
- (void)setHasUserResponseCategory:;
- (void)deleteUserResponseCategory;
- (int)userResponseCategory;
@end
