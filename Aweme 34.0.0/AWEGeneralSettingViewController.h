@interface AWEGeneralSettingViewController : AWESettingBaseViewController
@property (nonatomic) BOOL shouldShowDoubleColumnEntryPopup;
@property (nonatomic) BOOL shouldShowRelatedRecommendEntryPopup;
@property (nonatomic) BOOL shouldShowTabPreviewSettingPopup;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (BOOL)configWithRouterParamDict:;
- (id)enterMethod;
- (id)vcTitle;
- (void)updateSettingsCell;
- (long long)p_itemModelTypeWithString:;
- (void)setShouldShowDoubleColumnEntryPopup:;
- (void)setShouldShowRelatedRecommendEntryPopup:;
- (void)setShouldShowTabPreviewSettingPopup:;
- (BOOL)shouldShowDoubleColumnEntryPopup;
- (BOOL)shouldShowRelatedRecommendEntryPopup;
- (BOOL)shouldShowTabPreviewSettingPopup;
- (void)dealloc;
- (id)viewModel;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
