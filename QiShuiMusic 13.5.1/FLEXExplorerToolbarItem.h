@interface FLEXExplorerToolbarItem : UIButton
@property (nonatomic) FLEXExplorerToolbarItem sibling;
@property (nonatomic) NSString title;
@property (nonatomic) UIImage image;
@property (nonatomic) FLEXExplorerToolbarItem currentItem;
- (id)currentItem;
- (void)setHighlighted:;
- (void)setSelected:;
- (void)setEnabled:;
- (void)updateColors;
- (id)titleRectForContentRect:;
- (id)imageRectForContentRect:;
- (id)sibling;
- (void)setSibling:;
- (id)title;
- (void)setTitle:;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
+ (id)itemWithTitle:image:;
+ (id)itemWithTitle:image:sibling:;
+ (id)titleAttributes;
+ (id)highlightedBackgroundColor;
+ (id)selectedBackgroundColor;
+ (id)defaultBackgroundColor;
+ (double)topMargin;
+ (id)_selectedIndicatorImage;
@end
