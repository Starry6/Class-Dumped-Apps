@interface LPVerticalTextStackViewStyle : NSObject
@property (nonatomic) LPPointUnit firstLineLeading;
@property (nonatomic) LPPointUnit lastLineDescent;
@property (nonatomic) LPTextRowStyle aboveTopCaption;
@property (nonatomic) LPTextRowStyle topCaption;
@property (nonatomic) LPTextRowStyle bottomCaption;
@property (nonatomic) LPTextRowStyle belowBottomCaption;
@property (nonatomic) I maximumNumberOfLines;
@property (nonatomic) BOOL shouldAlignToBaselines;
@property (nonatomic) LPPadding captionTextPadding;
@property (nonatomic) LPPadding emailCompatibleMargin;
- (unsigned int)maximumNumberOfLines;
- (void)setMaximumNumberOfLines:;
- (void).cxx_destruct;
- (id)topCaption;
- (id)bottomCaption;
- (id)firstLineLeading;
- (id)lastLineDescent;
- (void)setFirstLineLeading:;
- (void)setLastLineDescent:;
- (void)applyToAllTextViewStyles:;
- (id)emailCompatibleMargin;
- (id)initWithPlatform:sizeClass:fontScalingFactor:;
- (id)aboveTopCaption;
- (id)belowBottomCaption;
- (BOOL)shouldAlignToBaselines;
- (void)setShouldAlignToBaselines:;
- (id)captionTextPadding;
@end
