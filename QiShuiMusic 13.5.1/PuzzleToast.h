@interface PuzzleToast : NSObject
@property (nonatomic) UIView toastView;
- (void)_showToast:withDuration:andImage:limitTextLines:;
- (void)dissMiss;
- (void).cxx_destruct;
- (id)toastView;
- (void)setToastView:;
+ (void)showToast:withDuration:;
+ (void)showToast:withDuration:andImage:;
+ (void)showToast:withDuration:andImage:limitTextLines:;
@end
