@interface AWEPlayInteractionDescriptionLabel : YYLabel
@property (nonatomic) BOOL isAccessibilityTraitButton;
@property (nonatomic) AWEPlayInteractionDescriptionContext descriptionContext;
@property (nonatomic) @? hitTestBlock;
- (void)layoutSubviews;
- (id)hitTestBlock;
- (void)setHitTestBlock:;
- (BOOL)isAccessibilityTraitButton;
- (void)setIsAccessibilityTraitButton:;
- (id)getAccessibilityElementWithAccessibilityString:accessibilityRange:;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (void)setAttributedText:;
- (void).cxx_destruct;
- (void)setAccessibilityElements:;
- (id)hitTest:withEvent:;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:;
- (BOOL)shouldGroupAccessibilityChildren;
- (id)descriptionContext;
- (void)setDescriptionContext:;
@end
