@interface AWEBindGuideComponentAlert : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (void)showWithContext:callbackWrapper:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:;
- (BOOL)canShow;
- (id)mr_accessIDForEvent:;
+ (id)sharedInstance;
@end
