@interface UISMutableSlotStyle : UISSlotStyle
@property (nonatomic) Q accessibilityButtonShapes;
@property (nonatomic) Q accessibilityContrast;
@property (nonatomic) Q displayRange;
@property (nonatomic) C displayScale;
@property (nonatomic) Q layoutDirection;
@property (nonatomic) Q legibilityWeight;
@property (nonatomic) NSString localization;
@property (nonatomic) Q preferredContentSizeCategory;
@property (nonatomic) ^{CGColor=} tintColor;
@property (nonatomic) Q userInterfaceIdiom;
@property (nonatomic) Q userInterfaceStyle;
- (void)setUserInterfaceIdiom:;
- (void)setUserInterfaceStyle:;
- (void)setLegibilityWeight:;
- (void)setPreferredContentSizeCategory:;
- (void)setTintColor:;
- (void)setLayoutDirection:;
- (void)setDisplayScale:;
- (id)copyWithZone:;
- (void)setAccessibilityContrast:;
- (void)setLocalization:;
- (void)setAccessibilityButtonShapes:;
- (void)setDisplayRange:;
@end
