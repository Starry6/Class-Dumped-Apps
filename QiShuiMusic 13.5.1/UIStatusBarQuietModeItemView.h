@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)accessibilityHUDRepresentation;
- (void)setVisible:;
- (void)dealloc;
- (void)animationDidStop:finished:;
- (void)_triggerAction:;
- (BOOL)updateForNewData:actions:;
- (void)setVisible:frame:duration:;
- (double)_visibleAlpha;
@end
