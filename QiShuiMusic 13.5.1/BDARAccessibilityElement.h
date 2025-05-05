@interface BDARAccessibilityElement : UIAccessibilityElement
@property (nonatomic) @? labelBlock;
@property (nonatomic) @? activateActionBlock;
- (id)activateActionBlock;
- (id)labelBlock;
- (void)setActivateActionBlock:;
- (void)setLabelBlock:;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
@end
