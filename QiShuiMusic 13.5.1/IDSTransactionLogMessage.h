@interface IDSTransactionLogMessage : NSObject
@property (nonatomic) NSString fromID;
@property (nonatomic) NSString loginID;
@property (nonatomic) NSString accountUniqueID;
@property (nonatomic) NSString serviceName;
- (id)_dictionaryRepresentation;
- (id)serviceName;
- (id)initWithDictionaryRepresentation:;
- (id)loginID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)_initWithAccountUniqueID:fromID:loginID:serviceName:;
- (id)accountUniqueID;
- (id)fromID;
+ (id)transactionLogMessageFromDictionaryRepresentation:;
@end
