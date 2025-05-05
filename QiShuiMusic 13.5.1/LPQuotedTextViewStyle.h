@interface LPQuotedTextViewStyle : LPTextViewStyle
@property (nonatomic) UIFont longPullQuoteFont;
@property (nonatomic) I maximumLinesToConsiderShort;
@property (nonatomic) BOOL showQuoteIndicator;
@property (nonatomic) BOOL showCharacterLimitIndicator;
@property (nonatomic) LPTextViewStyle characterLimitIndicatorStyle;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithPlatform:fontScalingFactor:;
- (id)adjustedForString:;
- (id)longPullQuoteFont;
- (void)setLongPullQuoteFont:;
- (unsigned int)maximumLinesToConsiderShort;
- (void)setMaximumLinesToConsiderShort:;
- (BOOL)showQuoteIndicator;
- (void)setShowQuoteIndicator:;
- (BOOL)showCharacterLimitIndicator;
- (void)setShowCharacterLimitIndicator:;
- (id)characterLimitIndicatorStyle;
@end
