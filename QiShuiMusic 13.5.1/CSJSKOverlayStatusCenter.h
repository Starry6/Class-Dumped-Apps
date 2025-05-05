@interface CSJSKOverlayStatusCenter : NSObject
@property (nonatomic) BOOL begainAnalyse;
@property (nonatomic) NSNumber deactivationReason;
@property (nonatomic) <CSJSKOverlayStatusDelegate> delegate;
- (void)addNotification;
- (void)applicationDeactivationReasonUserInfoKey:;
- (BOOL)begainAnalyse;
- (id)deactivationReason;
- (void)setBegainAnalyse:;
- (void)setDeactivationReason:;
- (void)storeOverlayDidFailToLoadWithError:;
- (void)storeOverlayDidFinishDismissal;
- (void)storeOverlayDidFinishPresentation;
- (void)storeOverlayWillStartDismissal;
- (void)storeOverlayWillStartPresentation;
- (void)applicationResumed:;
- (void)applicationWillResignActive:;
- (void)setDelegate:;
- (void)applicationDidBecomeActive:;
- (id)delegate;
- (void).cxx_destruct;
- (void)applicationWillAddDeactivationReason:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)shareInstance;
@end
