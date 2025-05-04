@interface AWESnackBar : NSObject
@property (nonatomic) AWESnackBarView snackBarView;
@property (nonatomic) NSTimer snackBarTimer;
@property (nonatomic) AWESnackBarViewContext currentShowingContext;
@property (nonatomic) BOOL isShowing;
- (void)p_handleAppWillResignActiveNotification;
- (id)snackBarTimer;
- (void)setSnackBarTimer:;
- (id)snackBarView;
- (void)setSnackBarView:;
- (id)currentShowingContext;
- (void)createTimerWithInterval:;
- (void)setCurrentShowingContext:;
- (id)init;
- (BOOL)isShowing;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)setIsShowing:;
+ (double)snackBarBottomPadding:;
+ (double)snackBarLeftPadding;
+ (double)snackBarHeight;
+ (void)dismissSnackBar;
+ (void)snackBarWithContext:;
+ (id)p_createTimerWithInterval:;
+ (void)snackBarWithMessage:;
+ (id)sharedInstance;
@end
