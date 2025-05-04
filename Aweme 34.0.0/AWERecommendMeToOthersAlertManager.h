@interface AWERecommendMeToOthersAlertManager : NSObject
@property (nonatomic) Q triggerScene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)setTriggerScene:;
- (unsigned long long)triggerScene;
- (void)handleRecommendMeToOthersValueChanged:;
- (id)init;
- (void)dealloc;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (BOOL)willShowAfterPublish:;
+ (void)showWithTrigger:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
