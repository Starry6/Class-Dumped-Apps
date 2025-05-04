@interface AWEIMMangoShareAppearanceInfo : NSObject
@property (nonatomic) double panelHeight;
@property (nonatomic) NSNumber preferThemeStyle;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString createGroupTitle;
- (double)panelHeight;
- (id)preferThemeStyle;
- (id)createGroupTitle;
- (void)setPanelHeight:;
- (void)setCreateGroupTitle:;
- (void)setPreferThemeStyle:;
- (id)initWithParams:;
- (id)description;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
@end
