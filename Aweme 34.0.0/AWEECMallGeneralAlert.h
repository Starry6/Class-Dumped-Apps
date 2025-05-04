@interface AWEECMallGeneralAlert : NSObject
@property (nonatomic) @? canShow;
@property (nonatomic) AWEForceAlertContext alertContext;
@property (nonatomic) @? showCallback;
@property (nonatomic) @? closeCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)canShow;
- (id)alertContext;
- (void)setAlertContext:;
- (void)setCloseCallback:;
- (id)closeCallback;
- (void)setCanShow:;
- (id)showCallback;
- (id)forceAlertIDForEvent:;
- (unsigned long long)forceAlertViewStyleForEvent:;
- (void)forceShowWithContext:callbackWrapper:;
- (void)forceDismissWithCallTrace:;
- (void)setShowCallback:;
- (void).cxx_destruct;
@end
