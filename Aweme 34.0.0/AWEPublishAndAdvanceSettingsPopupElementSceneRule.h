@interface AWEPublishAndAdvanceSettingsPopupElementSceneRule : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) BOOL enable;
@property (nonatomic) q defaultScenceOfDisable;
@property (nonatomic) q defaultScenceOfEnable;
@property (nonatomic) AWEPublishAndAdvanceSettingsPopupSceneItemConfig itemConfig;
@property (nonatomic) BOOL disableInEditPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemConfig;
- (void)setDefaultScenceOfDisable:;
- (void)setDefaultScenceOfEnable:;
- (void)setDisableInEditPage:;
- (long long)defaultScenceOfDisable;
- (BOOL)disableInEditPage;
- (long long)defaultScenceOfEnable;
- (id)itemConfigDictWithType:;
- (BOOL)enable;
- (id)type;
- (void).cxx_destruct;
- (id)initWithType:;
- (void)setEnable:;
@end
