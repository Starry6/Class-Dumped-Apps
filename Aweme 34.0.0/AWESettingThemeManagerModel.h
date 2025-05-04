@interface AWESettingThemeManagerModel : NSObject
@property (nonatomic) BOOL autoChange;
@property (nonatomic) Q changeType;
@property (nonatomic) AWEThemeChooseTimeModel darkTime;
@property (nonatomic) AWEThemeChooseTimeModel lightTime;
@property (nonatomic) BOOL lastModeLightEnable;
@property (nonatomic) NSInteger lastABValue;
- (BOOL)autoChange;
- (id)darkTime;
- (id)lightTime;
- (BOOL)lastModeLightEnable;
- (int)lastABValue;
- (void)setAutoChange:;
- (void)setDarkTime:;
- (void)setLightTime:;
- (void)setLastModeLightEnable:;
- (void)setLastABValue:;
- (void)setChangeType:;
- (void)encodeWithCoder:;
- (unsigned long long)changeType;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)copyWithZone:;
@end
