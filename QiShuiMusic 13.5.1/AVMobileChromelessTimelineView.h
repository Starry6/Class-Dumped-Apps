@interface AVMobileChromelessTimelineView : AVView
@property (nonatomic) AVMobileChromelessControlsStyleSheet styleSheet;
@property (nonatomic) NSString leadingTimeText;
@property (nonatomic) NSString trailingTimeText;
@property (nonatomic) Q labelPosition;
@property (nonatomic) BOOL sliderEmphasized;
@property (nonatomic) AVMobileChromelessSlider slider;
@property (nonatomic) BOOL labelsAutoadjustWithSliderEmphasis;
@property (nonatomic) BOOL drawsShadow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)slider;
- (id)initWithStyleSheet:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (void)setStyleSheet:;
- (void)setLabelPosition:;
- (void)setDrawsShadow:;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:;
- (void)setTrailingTimeText:;
- (id)trailingTimeText;
- (void)setSliderEmphasized:;
- (id)styleSheet;
- (id)leadingTimeText;
- (BOOL)sliderEmphasized;
- (void).cxx_destruct;
- (void)setLeadingTimeText:;
- (void)didMoveToWindow;
- (void)setLabelsAutoadjustWithSliderEmphasis:;
- (BOOL)drawsShadow;
- (void)_setUpShadowAppearance;
- (unsigned long long)labelPosition;
- (BOOL)labelsAutoadjustWithSliderEmphasis;
@end
