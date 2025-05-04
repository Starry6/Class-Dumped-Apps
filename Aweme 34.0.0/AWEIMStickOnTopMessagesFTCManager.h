@interface AWEIMStickOnTopMessagesFTCManager : NSObject
@property (nonatomic) NSSet hasFetchedConversationsSet;
- (id)hasFetchedConversationsSet;
- (void)setHasFetchedConversationsSet:;
- (void)checkConversationHasFetchedStickOnTopMessagesInThisLife:completion:;
- (void)setConversationHasFetchedInThisLife:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
