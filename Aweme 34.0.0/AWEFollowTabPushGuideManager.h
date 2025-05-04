@interface AWEFollowTabPushGuideManager : NSObject
@property (nonatomic) NSDictionary guideDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (void)showWithContext:onClose:;
- (void)showPitayaPushGuide:;
- (void)registerPushGuideByPitaya;
- (void)setGuideDic:;
- (id)trackOutAppNotifyParamsWithEventType:;
- (id)guideDic;
- (void)trackOutAppNotifyWithEventType:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
