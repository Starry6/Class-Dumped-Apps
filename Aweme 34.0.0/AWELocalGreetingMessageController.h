@interface AWELocalGreetingMessageController : NSObject
@property (nonatomic) BOOL didAddLocalGreet;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) AWEIMMessageBaseViewController vcParent;
- (id)vcParent;
- (void)setVcParent:;
- (void)tryAddLocalTopUserLabelGreetingMessageFor:;
- (void)tryAddLocalStrangerConTopAvatarFor:;
- (BOOL)didAddLocalGreet;
- (void)setDidAddLocalGreet:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
@end
