@interface MFMailMessageStoreSearchResult : NSObject
@property (nonatomic) NSMutableDictionary mailboxToRemoteIdDictionary;
@property (nonatomic) Q count;
@property (nonatomic) NSDate continueOffset;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)addRemoteID:mailbox:;
- (void)enumerateMailboxesAndRemoteIDsUsingBlock:;
- (id)continueOffset;
- (void)setContinueOffset:;
- (id)mailboxToRemoteIdDictionary;
- (void)setMailboxToRemoteIdDictionary:;
@end
