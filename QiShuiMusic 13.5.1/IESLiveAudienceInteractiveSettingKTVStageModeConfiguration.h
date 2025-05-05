@interface IESLiveAudienceInteractiveSettingKTVStageModeConfiguration : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString iconPath;
@property (nonatomic) BOOL selected;
@property (nonatomic) @? didClick;
- (id)didClick;
- (void)setDidClick:;
- (BOOL)selected;
- (void)setSelected:;
- (void)setTitle:;
- (void)setIconPath:;
- (id)iconPath;
- (id)title;
- (void).cxx_destruct;
@end
