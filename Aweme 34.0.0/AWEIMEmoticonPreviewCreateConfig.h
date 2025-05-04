@interface AWEIMEmoticonPreviewCreateConfig : NSObject
@property (nonatomic) q themeStyle;
@property (nonatomic) q containerViewType;
@property (nonatomic) BOOL ignoreTheme;
- (long long)containerViewType;
- (void)setThemeStyle:;
- (void)setContainerViewType:;
- (BOOL)ignoreTheme;
- (void)setIgnoreTheme:;
- (long long)themeStyle;
@end
