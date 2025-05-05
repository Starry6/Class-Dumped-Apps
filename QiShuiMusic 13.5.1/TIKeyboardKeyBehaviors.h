@interface TIKeyboardKeyBehaviors : NSObject
@property (nonatomic) Q spaceKeyBehavior;
@property (nonatomic) Q returnKeyBehavior;
@property (nonatomic) Q tabKeyBehavior;
- (unsigned long long)spaceKeyBehavior;
- (unsigned long long)returnKeyBehavior;
- (unsigned long long)tabKeyBehavior;
- (id)initWithSpaceKeyBehavior:returnKeyBehavior:tabKeyBehavior:;
- (void)setSpaceKeyBehavior:;
- (void)setReturnKeyBehavior:;
- (void)setTabKeyBehavior:;
+ (id)behaviorForSpaceKey:forReturnKey:;
+ (id)behaviorForSpaceKey:forReturnKey:forTabKey:;
@end
