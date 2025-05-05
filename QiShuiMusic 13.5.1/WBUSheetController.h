@interface WBUSheetController : NSObject
- (void)setDelegate:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)showSheetForAlert:;
- (void)showSheetForAlert:inView:;
- (void)hideSheet;
- (void)_alertDidDismissWithAction:;
+ (id)alertControllerForAlert:automaticallyDismiss:withCompletionHandler:;
@end
