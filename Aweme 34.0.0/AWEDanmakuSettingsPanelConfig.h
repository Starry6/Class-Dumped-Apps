@interface AWEDanmakuSettingsPanelConfig : NSObject
@property (nonatomic) BOOL showSmartMode;
@property (nonatomic) BOOL shouldShowDanmakuManager;
- (void)setShouldShowDanmakuManager:;
- (void)setShowSmartMode:;
- (BOOL)showSmartMode;
- (BOOL)shouldShowDanmakuManager;
+ (long long)numberSections;
+ (id)textFont:weight:fontName:;
+ (double)bigFontModeEnlarge:;
+ (id)sliderThemColor:;
@end
