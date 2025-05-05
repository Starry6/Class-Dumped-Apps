@interface IESLiveAudienceInteractSettingData : NSObject
@property (nonatomic) NSString categoryName;
@property (nonatomic) NSArray sceneConfigurations;
@property (nonatomic) NSArray playModeConfigurations;
@property (nonatomic) NSArray ktvStageModeConfigurations;
@property (nonatomic) NSArray settings;
@property (nonatomic) BOOL hasMoreButton;
@property (nonatomic) @? moreButtonDidClick;
- (BOOL)hasMoreButton;
- (id)ktvStageModeConfigurations;
- (id)moreButtonDidClick;
- (id)playModeConfigurations;
- (void)setHasMoreButton:;
- (void)setKtvStageModeConfigurations:;
- (void)setMoreButtonDidClick:;
- (void)setPlayModeConfigurations:;
- (void)setSceneConfigurations:;
- (id)settings;
- (void)setSettings:;
- (id)sceneConfigurations;
- (void).cxx_destruct;
- (id)categoryName;
- (void)setCategoryName:;
@end
