@interface AWELiveDynamicIslandActivitySingleton : NSObject
@property (nonatomic) BOOL activityIsShowing;
@property (nonatomic) BOOL activityHasAuthorized;
- (void)endActivityAll;
- (BOOL)activityHasAuthorized;
- (BOOL)activityIsShowing;
- (void)setActivityIsShowing:;
- (void)setActivityHasAuthorized:;
- (id)initWithDiContext:;
- (void)forceEndDynamicIslandIfNeedWithCompletion:;
- (id)init;
- (id)mutableCopy;
- (id)copy;
- (void).cxx_destruct;
+ (id)shared;
@end
