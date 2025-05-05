@interface IESLiveSaaSUIColorServiecIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)disableDarkMode;
- (long long)hostPreferStyle;
- (void)ies_addGlobalTraitChangeObserver:;
- (void)ies_globalTraitDidChangeTo:;
- (void)setDisableDarkMode:;
- (void)setEnableTraitChangedObserve:;
- (void)setHostPreferStyle:;
- (void)setUserPreferDarkModeStyle:;
- (void)switchUIConfigWithDefaultSetting;
- (void)switchUIConfigWithJsonData:;
- (void)switchUIConfigWithPath:;
- (long long)userPreferDarkModeStyle;
- (BOOL)isDarkMode;
@end
