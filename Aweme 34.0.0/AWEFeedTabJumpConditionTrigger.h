@interface AWEFeedTabJumpConditionTrigger : NSObject
@property (nonatomic) q eventType;
@property (nonatomic) BOOL isTriggered;
- (void)setIsTriggered:;
- (void)setEventType:;
- (long long)eventType;
- (BOOL)isTriggered;
+ (id)triggerWithEventType:;
@end
