@interface AWEDanmakuSettingsViewControllerDataSource : NSObject
@property (nonatomic) NSArray configModelList;
@property (nonatomic) Q dataSourceStyle;
@property (nonatomic) Q scene;
@property (nonatomic) <AWEDanmakuSettingsPanelDelegate> delegate;
- (id)aAWEPadModuleAdapter;
- (id)obtainDataSourceWithDanmakuScene:dataSourceStyle:;
- (void)updateDataSourceWithDanmakuScene:;
- (id)configModelWithIndex:;
- (void)setDataSourceStyle:;
- (id)configModelList;
- (id)updateDanmakuAlpha:;
- (unsigned long long)dataSourceStyle;
- (id)updateDanmakuDisplayArea:;
- (id)updateDanmakuFontSize:;
- (id)updateDanmakuShootSpeed:;
- (void)setConfigModelList:;
- (double)valuePercent:;
- (void)setScene:;
- (id)delegate;
- (long long)numberOfRowsInSection:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (Class)aAWEPadModuleAdapterClass;
@end
