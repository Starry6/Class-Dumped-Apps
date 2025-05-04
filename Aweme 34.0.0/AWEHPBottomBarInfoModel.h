@interface AWEHPBottomBarInfoModel : NSObject
@property (nonatomic) BOOL currentFillBackground;
@property (nonatomic) q currentThemeStyle;
@property (nonatomic) BOOL currentShowBackgroundImage;
@property (nonatomic) double currentBarAlpha;
@property (nonatomic) BOOL currentBarHidden;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} currentBarFrame;
@property (nonatomic) AWEHPChannelGuideInfoModel channelGuideInfo;
- (long long)currentThemeStyle;
- (void)setCurrentFillBackground:;
- (void)setCurrentThemeStyle:;
- (void)setCurrentShowBackgroundImage:;
- (void)setCurrentBarAlpha:;
- (void)setCurrentBarHidden:;
- (void)setCurrentBarFrame:;
- (void)setChannelGuideInfo:;
- (id)currentBarFrame;
- (BOOL)currentFillBackground;
- (BOOL)currentShowBackgroundImage;
- (double)currentBarAlpha;
- (BOOL)currentBarHidden;
- (id)channelGuideInfo;
- (id)description;
- (void).cxx_destruct;
@end
