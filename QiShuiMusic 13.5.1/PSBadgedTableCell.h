@interface PSBadgedTableCell : PSTableCell
- (void)setSelected:animated:;
- (void)dealloc;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:;
- (BOOL)_shouldUseRoundStyle;
- (id)initWithStyle:reuseIdentifier:specifier:;
- (void)setHighlighted:animated:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)resetLocale;
- (void)badgeWithInteger:;
+ (id)unreadBubbleImage;
+ (id)badgeNumberLabelTextColor;
+ (id)reuseIdentifierForClassAndType:;
+ (double)badgePadding;
@end
