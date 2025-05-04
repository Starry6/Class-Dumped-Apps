@interface AWETextStickerStylePreferenceModel : NSObject
@property (nonatomic) BOOL enableUsingUserPreference;
@property (nonatomic) AWEStoryFontModel preferenceTextFont;
@property (nonatomic) AWEStoryColor preferenceTextColor;
- (void)setEnableUsingUserPreference:;
- (void)setPreferenceTextFont:;
- (void)setPreferenceTextColor:;
- (BOOL)enableUsingUserPreference;
- (id)preferenceTextFont;
- (id)preferenceTextColor;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
