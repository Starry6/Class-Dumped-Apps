@interface AWEDanmakuSettingPanelGroupModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) Q groupType;
@property (nonatomic) AWEDanamkuSettingsViewOptionCellConfigModel config;
- (void)setConfig:;
- (void)setGroupType:;
- (unsigned long long)groupType;
- (id)config;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)danmakuSettingPanelGroupModelWithType:;
+ (long long)cellHeight;
@end
