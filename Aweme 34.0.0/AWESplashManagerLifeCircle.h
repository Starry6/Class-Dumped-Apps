@interface AWESplashManagerLifeCircle : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)onAppWillTerminate;
- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)uploadSessionEventIfNeed:;
+ (unsigned long long)priority;
@end
