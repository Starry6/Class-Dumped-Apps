@interface AWEUIListCellActionButton : UIButton
@property (nonatomic) BOOL isAttentionState;
@property (nonatomic) NSString attentionTitle;
@property (nonatomic) NSString normalTitle;
@property (nonatomic) AWEUIListCellActionButtonColorModel colorModel;
- (void)setNormalTitle:;
- (id)attentionTitle;
- (id)attributedStringForString:color:;
- (id)colorModel;
- (void)iesim_themeReload;
- (BOOL)isAttentionState;
- (id)normalTitle;
- (void)setAttentionTitle:;
- (void)setColorModel:;
- (void)setIsAttentionState:;
- (void)setTitle:icon:padding:requiresAttention:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setHighlighted:;
+ (double)expectedWidthForTitleArray:;
+ (double)maxWidthFittingTitles:font:;
+ (void)setTextPreProcessor:;
+ (double)suggestedWidthForTitle:font:;
+ (double)suggestedWidthForTitle:font:padding:;
+ (double)suggestedWidthForTitles:font:;
+ (double)suggestedWidthForTitles:font:padding:;
@end
