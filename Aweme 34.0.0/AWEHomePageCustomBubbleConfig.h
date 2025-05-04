@interface AWEHomePageCustomBubbleConfig : NSObject
@property (nonatomic) UIColor darkBGColor;
@property (nonatomic) UIColor lightBGColor;
@property (nonatomic) @? performShowAnimationBlock;
@property (nonatomic) @? performHideAnimationBlock;
@property (nonatomic) @? performVisualEffectShowAnimationBlock;
@property (nonatomic) @? performVisualEffectHideAnimationBlock;
@property (nonatomic) BOOL duxPopoverUse12pxRadius;
- (id)lightBGColor;
- (void)setLightBGColor:;
- (id)darkBGColor;
- (void)setDarkBGColor:;
- (void)setPerformShowAnimationBlock:;
- (id)performShowAnimationBlock;
- (void)setDuxPopoverUse12pxRadius:;
- (id)performHideAnimationBlock;
- (void)setPerformHideAnimationBlock:;
- (id)performVisualEffectShowAnimationBlock;
- (void)setPerformVisualEffectShowAnimationBlock:;
- (id)performVisualEffectHideAnimationBlock;
- (void)setPerformVisualEffectHideAnimationBlock:;
- (BOOL)duxPopoverUse12pxRadius;
- (void).cxx_destruct;
@end
