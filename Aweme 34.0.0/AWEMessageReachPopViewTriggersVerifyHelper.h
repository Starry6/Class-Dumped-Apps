@interface AWEMessageReachPopViewTriggersVerifyHelper : NSObject
+ (void)popViewTriggerWithPriority:event:completion:;
+ (id)getVerifiedTriggerSourceWithForceAlert:eventItem:ctags:;
+ (id)getVerifiedTriggerSourceWithContext:ctags:;
+ (id)getTriggerSourceNameWithContext:;
+ (id)popViewLegalEventToTriggerSourceMap;
+ (id)getTriggerSourceNameWithEventID:;
+ (id)popViewTriggerSourceSet;
+ (BOOL)isPopViewSourceAvailable:;
@end
