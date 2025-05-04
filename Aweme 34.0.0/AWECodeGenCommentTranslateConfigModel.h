@interface AWECodeGenCommentTranslateConfigModel : AWEBaseDataModel
@property (nonatomic) NSString openLabel;
@property (nonatomic) NSString closeLabel;
@property (nonatomic) NSString waitingLabel;
@property (nonatomic) NSString failLabel;
@property (nonatomic) NSString settingGuide;
@property (nonatomic) NSString goSetting;
@property (nonatomic) NSString unfoldLabel;
@property (nonatomic) NSString putAwayLabel;
- (id)goSetting;
- (id)settingGuide;
- (id)closeLabel;
- (id)openLabel;
- (id)failLabel;
- (id)waitingLabel;
- (id)unfoldLabel;
- (id)putAwayLabel;
- (void)setCloseLabel:;
- (void)setWaitingLabel:;
- (void)setFailLabel:;
- (void)setOpenLabel:;
- (void)setSettingGuide:;
- (void)setGoSetting:;
- (void)setUnfoldLabel:;
- (void)setPutAwayLabel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
