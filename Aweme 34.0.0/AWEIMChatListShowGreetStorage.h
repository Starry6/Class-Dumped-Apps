@interface AWEIMChatListShowGreetStorage : NSObject
@property (nonatomic) NSMutableSet showGreetSession;
- (void)setShowGreetSession:;
- (id)showGreetSession;
- (void)setSessionEnableShowGreet:sessionId:;
- (BOOL)isSessionEnableShowGreet:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
