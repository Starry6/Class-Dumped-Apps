@interface IDSTransactionLogDictionaryMessage : IDSTransactionLogMessage
@property (nonatomic) NSDictionary dictionaryValue;
- (id)initWithDictionaryRepresentation:;
- (id)dictionaryValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:accountUniqueID:fromID:loginID:serviceName:;
@end
