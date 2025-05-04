@interface AWEIMShareContactListUIConfig : NSObject
@property (nonatomic) BOOL enableDarkTheme;
@property (nonatomic) BOOL enableBigFontMode;
@property (nonatomic) q scene;
- (BOOL)enableBigFontMode;
- (BOOL)enableDarkTheme;
- (void)setEnableBigFontMode:;
- (void)setEnableDarkTheme:;
- (void)setScene:;
- (id)init;
- (long long)scene;
@end
