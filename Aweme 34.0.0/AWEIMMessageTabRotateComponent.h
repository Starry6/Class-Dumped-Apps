@interface AWEIMMessageTabRotateComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageTabPopupViewInterface> popupService;
@property (nonatomic) BOOL isCycleCallFlag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)setPopupService:;
- (BOOL)isCycleCallFlag;
- (void)setIsCycleCallFlag:;
- (id)popupService;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
@end
