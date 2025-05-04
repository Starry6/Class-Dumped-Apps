@interface AWEIMSwipeTrigger : NSObject
@property (nonatomic) q triggerType;
@property (nonatomic) double value;
- (BOOL)isTriggeredWithView:gesture:inSuperview:referenceFrame:;
- (double)value;
- (void)setValue:;
- (long long)triggerType;
- (void)setTriggerType:;
@end
