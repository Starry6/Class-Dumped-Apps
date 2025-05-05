@interface STCall : STSiriModelObject
- (void)setService:;
- (id)initWithCoder:;
- (long long)service;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)recipientAddress;
- (void)setRecipientAddress:;
- (id)_aceContextObjectValue;
- (id)initiatorAddress;
- (void)setInitiatorAddress:;
+ (BOOL)supportsSecureCoding;
@end
