@interface MFRecentComposeRecipient : MFComposeRecipient
- (BOOL)isGroup;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)placeholderName;
- (BOOL)isRemovableFromSearchResults;
- (id)recentContact;
- (id)preferredSendingAddress;
- (id)initWithRecentContact:;
@end
