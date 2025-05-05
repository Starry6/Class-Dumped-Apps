@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage
@property (nonatomic) NSData dataValue;
- (id)dataValue;
- (id)initWithDictionaryRepresentation:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithData:accountUniqueID:fromID:loginID:serviceName:;
@end
