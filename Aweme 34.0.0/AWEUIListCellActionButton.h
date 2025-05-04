@interface AWEUIListCellActionButton : UIButton
@property (nonatomic) BOOL isAttentionState;
@property (nonatomic) NSString attentionTitle;
@property (nonatomic) NSString normalTitle;
@property (nonatomic) AWEUIListCellActionButtonColorModel colorModel;
- (void)awe_themeReload;
- (void)setIsAttentionState:;
- (void)setAttentionTitle:;
- (void)setNormalTitle:;
- (id)normalTitle;
- (id)colorModel;
- (void)setColorModel:;
- (id)attentionTitle;
- (id)attributedStringForString:color:;
- (BOOL)isAttentionState;
- (id)attributedStringForString:color:font:;
- (void)setTitle:icon:padding:requiresAttention:;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (void).cxx_destruct;
+ (double)suggestedWidthForTitle:font:padding:;
+ (double)suggestedWidthForTitles:font:padding:;
+ (double)maxWidthFittingTitles:font:;
+ (double)suggestedWidthForTitle:font:;
+ (double)suggestedWidthForTitles:font:;
+ (double)expectedWidthForTitleArray:;
+ (void)setTextPreProcessor:;
@end
