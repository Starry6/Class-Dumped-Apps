@interface AWEBackgroundPlaySettingsViewModel : NSObject
@property (nonatomic) NSArray sectionList;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSDictionary logExtraParams;
@property (nonatomic) NSArray configList;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)configList;
- (void)setConfigList:;
- (id)cellModelWithIndexPath:;
- (id)logExtraParams;
- (void)setLogExtraParams:;
- (void)configWithModel:logExtraParams:;
- (void)panelWillDisplay;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:;
- (void).cxx_destruct;
- (void)setSectionList:;
- (id)sectionList;
@end
