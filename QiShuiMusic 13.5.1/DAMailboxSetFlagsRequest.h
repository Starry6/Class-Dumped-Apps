@interface DAMailboxSetFlagsRequest : DAMailboxRequest
@property (nonatomic) Q onFlags;
@property (nonatomic) Q offFlags;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)initRequestWithSetFlags:unsetFlags:message:;
- (unsigned long long)onFlags;
- (void)setOnFlags:;
- (unsigned long long)offFlags;
- (void)setOffFlags:;
@end
