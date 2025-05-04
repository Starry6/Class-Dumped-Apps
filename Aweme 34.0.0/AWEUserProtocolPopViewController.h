@interface AWEUserProtocolPopViewController : UIViewController
@property (nonatomic) AWEUserProtocolPopViewModel model;
@property (nonatomic) @? callBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)sheetDidClickMaskArea:;
- (void)sheetDidDragToDismiss:;
- (void)setCallBack:;
- (void)showInTopViewControllerWithCallBack:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (id)callBack;
@end
