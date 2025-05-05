@interface CNMessageToGroup : NSObject
@property (nonatomic) CNContactFormatter contactFormatter;
- (id)init;
- (id)contactFormatter;
- (void)setContactFormatter:;
- (void).cxx_destruct;
- (id)messageUrlForContacts:;
- (id)emailAddressForContact:;
- (id)messagingAddressForContact:;
- (id)santizeMessagingAddress:;
+ (id)descriptorForRequiredKeys;
+ (id)os_log;
@end
