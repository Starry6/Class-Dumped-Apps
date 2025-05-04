@interface AWETeenModule : NSObject
@property (nonatomic) Q becomeActiveTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)onAppWillTerminate;
- (void)onAppWillEnterForeground;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (unsigned long long)becomeActiveTime;
- (void)setBecomeActiveTime:;
@end
