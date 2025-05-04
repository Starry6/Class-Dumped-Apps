@interface AWEIMShareAdditionTextViewUIConfig : NSObject
@property (nonatomic) BOOL enableDarkTheme;
@property (nonatomic) BOOL enableBigFontMode;
@property (nonatomic) BOOL enableTopSeparateLine;
- (BOOL)enableTopSeparateLine;
- (BOOL)enableBigFontMode;
- (BOOL)enableDarkTheme;
- (void)setEnableBigFontMode:;
- (void)setEnableDarkTheme:;
- (void)setEnableTopSeparateLine:;
- (id)init;
@end
