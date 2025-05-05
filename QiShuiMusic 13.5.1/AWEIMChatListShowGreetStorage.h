@interface AWEIMChatListShowGreetStorage : NSObject
@property (nonatomic) NSMutableSet showGreetSession;
- (BOOL)isSessionEnableShowGreet:;
- (void)setSessionEnableShowGreet:sessionId:;
- (void)setShowGreetSession:;
- (id)showGreetSession;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
