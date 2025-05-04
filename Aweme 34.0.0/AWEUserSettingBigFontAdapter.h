@interface AWEUserSettingBigFontAdapter : NSObject
@property (nonatomic) BOOL bigFontModeEnable;
@property (nonatomic) BOOL modernBigFontEnable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adaptiveFontOfSize:weight:;
- (double)adaptiveChangeFontSize:;
- (void)setBigFontModeEnable:;
- (BOOL)modernBigFontEnable;
- (BOOL)bigFontModeEnable;
- (void)setModernBigFontEnable:;
@end
