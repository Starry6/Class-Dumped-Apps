@interface ICContentKeyStoreEntry : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSData keyData;
@property (nonatomic) NSDate renewalDate;
@property (nonatomic) Q failureCount;
- (id)keyData;
- (unsigned long long)failureCount;
- (id)renewalDate;
- (id)identifier;
- (id)initWithDictionaryRepresentation:;
- (void)setFailureCount:;
- (void)setKeyData:;
- (void)setRenewalDate:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:;
- (void)setIdentifier:;
@end
