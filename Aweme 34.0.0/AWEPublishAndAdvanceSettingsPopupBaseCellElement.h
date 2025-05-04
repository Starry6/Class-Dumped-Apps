@interface AWEPublishAndAdvanceSettingsPopupBaseCellElement : AWEPostPageCellElement
@property (nonatomic) <AWEPublishAndAdvanceSettingsPopup> popup;
- (void)bindServices:;
- (void)didSwitherToggled:;
- (id)indexPath;
- (void)reload;
- (id)description;
- (void).cxx_destruct;
- (id)popup;
- (void)setPopup:;
+ (void)setupCustomSceneRule:context:;
+ (long long)registerScene:;
@end
