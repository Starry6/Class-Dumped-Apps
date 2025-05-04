@interface AWEAfterCommentPushGuideManager : NSObject
@property (nonatomic) NSDictionary paramsDic;
@property (nonatomic) AWEAlertCallbackWrapper callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (void)showWithContext:callbackWrapper:;
- (id)mr_accessIDForEvent:;
- (void)showPitayaPushGuide:;
- (void)registerPushGuideByPitaya;
- (void)pushGuideDismiss:;
- (void)setParamsDic:;
- (id)paramsDic;
- (void)setCallback:;
- (id)callback;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
