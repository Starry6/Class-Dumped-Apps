@interface AWELocoalGifCreater_GroupGreeting : AWELocoalGifBaseCreater
@property (nonatomic) AWELocoalGifCreaterContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentAlreadyShowGroupGreetingMsg;
- (BOOL)canCreateWithIgnoreUser:;
- (void)createMessageWithCompletion:;
@end
