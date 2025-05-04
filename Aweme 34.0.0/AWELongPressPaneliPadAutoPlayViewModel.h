@interface AWELongPressPaneliPadAutoPlayViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) <AWEFeedAutoPlayManagerProtocol> autoPlayManager;
- (id)aAWEPadModuleAdapter;
- (BOOL)needShow;
- (void)setAutoPlayManager:;
- (id)autoPlayManager;
- (void)switchDidChange:;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)aAWEFeedDOUYINiPadModuleAdapter;
- (void).cxx_destruct;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)longPressPanelViewModel;
+ (Class)aAWEFeedDOUYINiPadModuleAdapterClass;
@end
