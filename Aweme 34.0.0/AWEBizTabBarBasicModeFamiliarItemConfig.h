@interface AWEBizTabBarBasicModeFamiliarItemConfig : NSObject
@property (nonatomic) UIButton<AWEBasicModeTabBarGeneralButtonProtocol> familiarButton;
@property (nonatomic) AWEBasicModeTabBarViewController familiarController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEBasicModeAdapter;
- (id)familiarButton;
- (id)familiarController;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (BOOL)canLandingWithTabId:params:;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:isByTap:;
- (void)setFamiliarButton:;
- (void)setFamiliarController:;
- (void).cxx_destruct;
+ (Class)aAWEBasicModeAdapterClass;
+ (id)sharedConfig;
@end
