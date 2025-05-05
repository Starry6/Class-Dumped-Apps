@interface AFEAlertView : NSObject
@property (nonatomic) @? fblk;
@property (nonatomic) @? sblk;
@property (nonatomic) BOOL isAlertViewShow;
- (BOOL)isAlertViewShow;
- (void)displayAlertViewWithTitle:message:firstButtonTitle:secondBittonTitle:firstCallBack:secondCallBack:withVC:;
- (void)displayCameraPermissionAlert:title:detailTitle:cancleTip:retryTip:cancelCallBack:setCallBack:;
- (void)displayLivnessFailAlertView:tips:cancleTip:retryTip:withCancelCallBack:retryCallBack:withVC:;
- (id)fblk;
- (BOOL)isAPBAlertViewController;
- (id)sblk;
- (void)setFblk:;
- (void)setIsAlertViewShow:;
- (void)setSblk:;
- (void).cxx_destruct;
- (id)keyWindow;
- (id)currentViewController;
+ (id)sharedInstance;
@end
