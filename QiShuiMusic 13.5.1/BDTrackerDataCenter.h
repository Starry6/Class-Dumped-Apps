@interface BDTrackerDataCenter : NSObject
+ (void)category:event:label:dict:json:;
+ (void)eventV3:params:isDoubleSending:;
+ (void)addIDsToData:;
+ (id)addParamsCommonValue:version:localTime:;
+ (void)category:event:label:dict:;
+ (void)category:event:label:json:;
+ (void)checkWithPriority:holder:dataLength:;
+ (void)collectCustomEvent:data:;
+ (void)event:label:;
+ (void)event:label:json:;
+ (void)event:label:value:extValue:extValue2:;
+ (void)event:label:value:extValue:extValue2:dict:;
+ (void)eventData:policy:;
+ (void)eventData:policy:version:;
+ (void)eventData:version:;
+ (void)handleTrackEvent:;
+ (BOOL)hitSamplingForEvent:;
+ (long long)policyForEvent:origin:;
+ (void)recoverSession;
+ (BOOL)shouldBlockWithData:version:;
+ (void)trackerEventWithData:version:policy:;
+ (void)trackerEventWithData:version:policy:localTime:;
+ (void)trackerLaunch:;
+ (void)trackerTerminate;
+ (id)trackerTerminateOnlyBackgroundWithSessionID:;
+ (id)updateClosingV1Flag:;
+ (void)updateImmediateEventList:;
@end
