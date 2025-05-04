@interface AWEProfileGuidePopoverBaseAlert : NSObject
@property (nonatomic) @? onClose;
@property (nonatomic) Q launchStamp;
@property (nonatomic) <AWEProfileGuidePopoverAlertDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showWithCloseCallback:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (unsigned long long)launchStamp;
- (void)setLaunchStamp:;
- (void)invokeOnClose:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)onClose;
- (void)setOnClose:;
+ (id)sharedInstance;
@end
