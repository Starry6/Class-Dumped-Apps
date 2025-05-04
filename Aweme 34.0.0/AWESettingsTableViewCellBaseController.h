@interface AWESettingsTableViewCellBaseController : NSObject
@property (nonatomic) AWESettingItemModel itemModel;
@property (nonatomic) UIViewController container;
@property (nonatomic) BOOL isCellDisplaying;
@property (nonatomic) BOOL isCellOnScreen;
- (id)itemModel;
- (void)setItemModel:;
- (void)didEndDisplayCell;
- (void)didBindItemModel;
- (BOOL)isCellOnScreen;
- (void)setIsCellDisplaying:;
- (BOOL)isCellDisplaying;
- (id)initWithItemModel:container:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)willDisplayCell;
- (void)didSelectCell;
@end
