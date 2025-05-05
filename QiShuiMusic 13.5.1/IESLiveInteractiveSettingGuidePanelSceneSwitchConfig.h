@interface IESLiveInteractiveSettingGuidePanelSceneSwitchConfig : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString backgroundColorName;
@property (nonatomic) NSString iconName;
@property (nonatomic) NSString alertStr;
@property (nonatomic) @? tapBlock;
- (id)alertStr;
- (void)setAlertStr:;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)setTitle:;
- (id)iconName;
- (id)title;
- (void).cxx_destruct;
- (void)setIconName:;
- (id)backgroundColorName;
- (void)setBackgroundColorName:;
@end
