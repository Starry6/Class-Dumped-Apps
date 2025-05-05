@interface IESSaaSTIMOMessageNotifier : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__messageWithIdentifier:;
- (void)onConversationCleared:;
- (void)onConversationsDeleted:;
- (void)onMessagesCreated:belongingConversationMap:reason:;
- (void)onMessagesDeleted:belongingConversationMap:;
- (void)onMessagesUpdated:belongingConversationMap:;
- (id)init;
+ (long long)startUpOrder;
+ (void)startUp;
+ (id)sharedInstance;
@end
