@interface UIKeyboardBIUImageGenerator : NSObject
@property (nonatomic) UIColor tintColor;
@property (nonatomic) UIColor normalColor;
- (id)init;
- (void)setNormalColor:;
- (id)tintColor;
- (id)BIUImageForBold:italic:underline:;
- (void)_accessibilitySettingsChanged:;
- (void)_drawBIUAtSize:bold:italic:underline:;
- (void)_invalidateCache;
- (void).cxx_destruct;
- (void)setTintColor:;
- (id)normalColor;
@end
