@interface CNAvatarCacheChangeAnalysis : NSObject
@property (nonatomic) NSData currentChangeHistoryToken;
@property (nonatomic) NSArray identifiersOfAffectedContacts;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCurrentChangeHistoryToken:identifiersOfAffectedContacts:;
- (id)currentChangeHistoryToken;
- (id)identifiersOfAffectedContacts;
@end
