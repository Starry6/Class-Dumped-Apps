@interface AWEIMBannerIconConfig : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel normalIcon;
@property (nonatomic) IESIMURLModel highIcon;
- (id)highIcon;
- (id)normalIcon;
- (void)setHighIcon:;
- (void)setNormalIcon:;
- (void).cxx_destruct;
+ (id)getURLFromConfigAccordingToScreenScale:;
+ (id)highIconJSONTransformer;
+ (id)normalIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
