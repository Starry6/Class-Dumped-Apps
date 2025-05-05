@interface POPBasicAnimation : POPPropertyAnimation
@property (nonatomic) double duration;
@property (nonatomic) CAMediaTimingFunction timingFunction;
- (void)_appendDescription:debug:;
- (void)_initState;
- (id)init;
- (void)setTimingFunction:;
- (void)setDuration:;
- (id)timingFunction;
- (double)duration;
- (id)copyWithZone:;
+ (id)easeInAnimation;
+ (id)linearAnimation;
+ (id)animationWithPropertyNamed:;
+ (id)easeInEaseOutAnimation;
+ (id)easeOutAnimation;
+ (id)animation;
+ (id)defaultAnimation;
@end
