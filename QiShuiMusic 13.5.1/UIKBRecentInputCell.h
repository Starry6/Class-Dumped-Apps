@interface UIKBRecentInputCell : UICollectionViewCell
@property (nonatomic) UILabel label;
- (void)layoutSubviews;
- (void)setSelected:;
- (void)setLabel:;
- (id)label;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)isFocused;
- (BOOL)_canFocusProgrammatically;
- (void)setInputText:;
+ (id)textColorForRenderConfig:isSelected:;
+ (id)titleAttributesForRenderConfig:;
@end
