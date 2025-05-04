@interface AWEHPProfileSideBarModuleContext : NSObject
@property (nonatomic) NSString sideBarIdentifer;
@property (nonatomic) NSString moduleType;
@property (nonatomic) q themeMode;
@property (nonatomic) q themeType;
@property (nonatomic) double leftSideBarWidth;
@property (nonatomic) double leftSideBarHorizontalPadding;
- (double)leftSideBarWidth;
- (double)leftSideBarHorizontalPadding;
- (void)setThemeMode:;
- (long long)themeMode;
- (id)sideBarIdentifer;
- (void)setSideBarIdentifer:;
- (void)setLeftSideBarWidth:;
- (void)setLeftSideBarHorizontalPadding:;
- (long long)themeType;
- (void).cxx_destruct;
- (id)moduleType;
- (void)setModuleType:;
- (void)setThemeType:;
@end
