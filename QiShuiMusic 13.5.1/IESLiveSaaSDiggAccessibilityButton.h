@interface IESLiveSaaSDiggAccessibilityButton : IESLiveButton
@property (nonatomic) @? builderBlock;
@property (nonatomic) @? doubleClickBlock;
- (id)builderBlock;
- (id)doubleClickBlock;
- (void)setBuilderBlock:;
- (void)setDoubleClickBlock:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (BOOL)accessibilityActivate;
@end
