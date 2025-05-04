@interface AWEBizTabBarUIControlTask : NSObject
@property (nonatomic) q state;
@property (nonatomic) q taskID;
@property (nonatomic) NSString bizID;
@property (nonatomic) <AWETabBarControllerUIControlDelegate> delegate;
@property (nonatomic) NSNumber lightModeProgress;
@property (nonatomic) NSNumber BGColorFill;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lightModeProgress;
- (id)BGColorFill;
- (id)initWithTaskID:bizID:;
- (void)updateLightModeProgress:;
- (void)updateBGColorFill:;
- (void)pushTaskToStack;
- (void)popTaskFromStack;
- (id)delegate;
- (long long)state;
- (id)description;
- (void).cxx_destruct;
- (void)setDelegate:;
- (long long)taskID;
- (id)bizID;
+ (id)createTaskWithBizID:;
@end
