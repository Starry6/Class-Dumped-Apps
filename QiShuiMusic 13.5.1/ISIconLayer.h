@interface ISIconLayer : CALayer
@property (nonatomic) ISIcon icon;
@property (nonatomic) Q variantOptions;
@property (nonatomic) Q badgeOptions;
@property (nonatomic) Q backgroundStyle;
@property (nonatomic) Q iconShape;
@property (nonatomic) BOOL shouldApplyMask;
@property (nonatomic) BOOL drawBorder;
- (id)init;
- (void)setDrawBorder:;
- (void)setBackgroundStyle:;
- (id)icon;
- (BOOL)shouldApplyMask;
- (unsigned long long)backgroundStyle;
- (void)setBadgeOptions:;
- (void)setVariantOptions:;
- (id)initWithIcon:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setShouldApplyMask:;
- (unsigned long long)badgeOptions;
- (unsigned long long)variantOptions;
- (BOOL)drawBorder;
- (void)iconManager:didInvalidateIcons:;
- (unsigned long long)iconShape;
- (void)setIconShape:;
@end
