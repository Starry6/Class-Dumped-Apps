@interface DAMailboxDeleteMessageRequest : DAMailboxRequest
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)initRequestWithMessageID:;
@end
