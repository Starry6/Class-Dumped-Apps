@interface BDUGLuckyTimerBackgroundRule : NSObject
@property (nonatomic) BOOL isSatisfied;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsSatisfied:;
- (void)__enterBackground;
- (void)__enterForeground;
- (void)__updateStatus;
- (id)init;
- (void)dealloc;
- (BOOL)isSatisfied;
+ (void)registerPendantRule;
+ (void)registerTimingRule;
+ (id)ruleName;
@end
