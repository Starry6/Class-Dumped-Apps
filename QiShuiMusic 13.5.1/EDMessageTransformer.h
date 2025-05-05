@interface EDMessageTransformer : NSObject
@property (nonatomic) EDMailboxProvider mailboxProvider;
@property (nonatomic) <EMUserProfileProvider> userProfileProvider;
@property (nonatomic) EMBlockedSenderManager blockedSenderManager;
@property (nonatomic) <EMVIPReader> vipReader;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userProfileProvider;
- (id)blockedSenderManager;
- (void).cxx_destruct;
- (id)transformBaseMessage:mailboxScope:loaderBlock:;
- (id)mailboxProvider;
- (id)initWithMailboxProvider:userProfileProvider:blockedSenderManager:vipReader:;
- (id)transformPersistedMessages:mailboxScope:;
- (id)_transformBaseMessage:mailboxScope:duplicateInfo:loaderBlock:;
- (id)vipReader;
+ (id)log;
+ (id)mailboxesForPersistedMessage:mailboxProvider:;
@end
