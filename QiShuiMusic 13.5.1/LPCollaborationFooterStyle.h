@interface LPCollaborationFooterStyle : NSObject
@property (nonatomic) LPPadding margin;
@property (nonatomic) LPPadding separatorMargin;
@property (nonatomic) LPPadding padding;
@property (nonatomic) LPPointUnit indicatorSpacing;
@property (nonatomic) LPPointUnit cornerRadius;
@property (nonatomic) LPTextViewStyle options;
@property (nonatomic) LPTextViewStyle handle;
@property (nonatomic) BOOL showSeparator;
@property (nonatomic) BOOL useFullWidth;
@property (nonatomic) BOOL useInlineIndicator;
@property (nonatomic) BOOL useFullWidthDuringSizing;
- (id)handle;
- (id)margin;
- (void)setShowSeparator:;
- (id)indicatorSpacing;
- (void)setIndicatorSpacing:;
- (id)options;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (id)padding;
- (id)cornerRadius;
- (id)separatorMargin;
- (BOOL)showSeparator;
- (id)initWithPlatform:sizeClass:fontScalingFactor:;
- (BOOL)useFullWidth;
- (void)setUseFullWidth:;
- (BOOL)useInlineIndicator;
- (void)setUseInlineIndicator:;
- (BOOL)useFullWidthDuringSizing;
- (void)setUseFullWidthDuringSizing:;
@end
