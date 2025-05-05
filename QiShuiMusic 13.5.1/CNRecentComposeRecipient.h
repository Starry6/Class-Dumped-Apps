@interface CNRecentComposeRecipient : CNComposeRecipient
- (BOOL)isGroup;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)placeholderName;
- (id)recentContact;
- (id)preferredSendingAddress;
- (id)initWithRecentContact:;
@end
