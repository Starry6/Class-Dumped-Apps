@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel unreleasedBanner;
@property (nonatomic) UIView navigationHighlightView;
@property (nonatomic) UILabel noResultsLabel;
@property (nonatomic) UIKeyboardEmoji emoji;
@property (nonatomic) q emojiFontSize;
@property (nonatomic) BOOL unreleasedHighlight;
@property (nonatomic) BOOL noResultsCell;
- (void)setSelected:;
- (id)debugDescription;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)emoji;
- (void)setEmoji:;
- (void)setEmojiFontSize:;
- (long long)emojiFontSize;
- (void)setUnreleasedHighlight:;
- (void)setNoResultsCell:;
- (id)unreleasedBanner;
- (void)setUnreleasedBanner:;
- (BOOL)unreleasedHighlight;
- (BOOL)noResultsCell;
- (id)navigationHighlightView;
- (void)setNavigationHighlightView:;
- (id)noResultsLabel;
- (void)setNoResultsLabel:;
@end
