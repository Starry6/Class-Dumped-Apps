@interface AWETimingCloseModule : NSObject
@property (nonatomic) BOOL executedAppWillEnterForeground;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)onAppWillEnterForeground;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)onAppDidBecomeActiveFromResign;
- (void)onAppDidBecomeActiveFromBackground;
- (void)setExecutedAppWillEnterForeground:;
- (BOOL)executedAppWillEnterForeground;
@end
