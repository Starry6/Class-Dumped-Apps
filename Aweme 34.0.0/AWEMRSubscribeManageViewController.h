@interface AWEMRSubscribeManageViewController : AWEMRSubscribeManageBaseViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString referString;
- (id)referString;
- (BOOL)configWithRouterParamDict:;
- (id)sectionControllerClassArray;
- (void)bindViewModel;
- (void)bindEvent;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:;
- (void)setupUI;
+ (Class)viewHolderClass;
@end
