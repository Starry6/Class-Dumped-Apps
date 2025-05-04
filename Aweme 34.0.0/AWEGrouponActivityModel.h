@interface AWEGrouponActivityModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel activityBgImgURL;
@property (nonatomic) AWEURLModel activityBgImgLightURL;
@property (nonatomic) NSString bgTextColor;
@property (nonatomic) NSString bgTextColorLight;
@property (nonatomic) q displayTransformerTheme;
@property (nonatomic) NSString trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (long long)displayTransformerTheme;
- (id)activityBgImgURL;
- (id)bgTextColor;
- (id)activityBgImgLightURL;
- (id)bgTextColorLight;
- (void)setDisplayTransformerTheme:;
- (void)setBgTextColor:;
- (void)setBgTextColorLight:;
- (void)setActivityBgImgURL:;
- (void)setActivityBgImgLightURL:;
- (void).cxx_destruct;
@end
