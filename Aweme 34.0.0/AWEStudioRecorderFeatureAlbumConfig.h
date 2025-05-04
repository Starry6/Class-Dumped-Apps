@interface AWEStudioRecorderFeatureAlbumConfig : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) BOOL onlyShowNextButton;
@property (nonatomic) Q bottomViewStyle;
@property (nonatomic) UIColor nextButtonBackgroundColor;
- (unsigned long long)bottomViewStyle;
- (void)setBottomViewStyle:;
- (id)nextButtonBackgroundColor;
- (void)setNextButtonBackgroundColor:;
- (BOOL)onlyShowNextButton;
- (void)setOnlyShowNextButton:;
- (void).cxx_destruct;
@end
