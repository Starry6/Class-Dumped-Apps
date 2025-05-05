@interface BrcEnvPostMsg : NSObject
@property (nonatomic) BOOL appRunBackGround;
- (BOOL)PostMessage:arg1:arg2:arg3:;
- (void)appForground;
- (BOOL)appRunBackGround;
- (int)onUserCommand:;
- (void)setAppRunBackGround:;
- (id)init;
- (void)dealloc;
- (void)appBackground;
@end
