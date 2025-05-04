@interface AWEActiveContactAlert : NSObject
@property (nonatomic) NSDictionary extraDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (id)extraDict;
- (void)setExtraDict:;
- (void).cxx_destruct;
+ (id)triggerScene:;
+ (void)showIfNeeded:params:trigger:;
+ (id)sharedInstance;
@end
