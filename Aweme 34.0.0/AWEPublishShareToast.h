@interface AWEPublishShareToast : NSObject
@property (nonatomic) AWEPublishShareToastController controller;
@property (nonatomic) UIWindow overlayWindow;
@property (nonatomic) NSLock dismissLock;
@property (nonatomic) BOOL isDelayToShow;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) @? showBlock;
@property (nonatomic) double toastHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (id)showBlock;
- (void)setShowBlock:;
- (double)toastHeight;
- (BOOL)isDelayToShow;
- (void)_showWithDuration:;
- (id)dismissLock;
- (void)setIsDelayToShow:;
- (void)setDismissLock:;
- (void)setToastHeight:;
- (void)setController:;
- (id)init;
- (void)_dismiss;
- (BOOL)isDismissing;
- (void)_close;
- (void).cxx_destruct;
- (id)controller;
- (void)setIsDismissing:;
- (id)overlayWindow;
- (void)setOverlayWindow:;
+ (Class)aAWEPadModuleAdapterClass;
+ (void)showAweme:withType:platform:;
+ (void)showAweme:withType:platform:publishViewModel:showIMListOnly:tapBlock:;
+ (void)delayToShow;
+ (void)showAweme:withType:platform:publishViewModel:showIMListOnly:;
+ (void)showWithDuration:;
+ (void)dismissWithDelay:;
+ (void)cancelAutomaticDismiss;
+ (void)close;
+ (id)sharedInstance;
+ (void)resume;
+ (void)dismiss;
@end
