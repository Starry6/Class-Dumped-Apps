@interface AWELocoalGifCreater_StrangerGreeting : AWELocoalGifBaseCreater
@property (nonatomic) AWELocoalGifCreaterContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canCreateWithIgnoreUser:;
- (BOOL)canGreetingCoexistWithMessageGroups;
- (void)p_addGreetingMsg:;
- (BOOL)hasMessageCantCoexistWithGreetingForAtLeast:withMessageGroups:;
- (void)createMessageWithCompletion:;
+ (BOOL)canGreetingCoexistWithMessage:;
@end
