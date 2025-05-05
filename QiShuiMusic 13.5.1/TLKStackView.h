@interface TLKStackView : NUIContainerStackView
@property (nonatomic) BOOL isForcedToBeVertical;
@property (nonatomic) BOOL flipsToVerticalAxisForAccessibilityContentSizes;
- (void)setAlignment:;
- (void)setAxis:;
- (void)addArrangedSubview:;
- (void)setFlipsToVerticalAxisForAccessibilityContentSizes:;
- (BOOL)flipsToVerticalAxisForAccessibilityContentSizes;
- (BOOL)isForcedToBeVertical;
- (void)setIsForcedToBeVertical:;
@end
