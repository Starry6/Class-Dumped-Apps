@interface AWEIMGroupBotsManagerComponent : AWEIMComponentBase
@property (nonatomic) NSNumber botUidCountNum;
@property (nonatomic) NSDictionary lastExtDict;
@property (nonatomic) NSString delayTransferSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onConversationDidUpdateWithConversation:;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
- (void)botsDidUpdate;
- (id)lastExtDict;
- (void)setLastExtDict:;
- (id)botUidCountNum;
- (void)setBotUidCountNum:;
- (void)participantsDidUpdate;
- (id)delayTransferSchema;
- (void)setDelayTransferSchema:;
- (void).cxx_destruct;
- (id)conversation;
+ (BOOL)canCreateComponentWithContext:;
@end
