@interface AWEHPChannelContentInfo : NSObject
@property (nonatomic) double currentPlayingTime;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) BOOL canShowIntroductionAlert;
@property (nonatomic) BOOL isSplashFirstDisappear;
- (id)aweme;
- (void)setAweme:;
- (double)currentPlayingTime;
- (BOOL)isSplashFirstDisappear;
- (void)setIsSplashFirstDisappear:;
- (void)setCurrentPlayingTime:;
- (void)setCanShowIntroductionAlert:;
- (BOOL)canShowIntroductionAlert;
- (void).cxx_destruct;
@end
