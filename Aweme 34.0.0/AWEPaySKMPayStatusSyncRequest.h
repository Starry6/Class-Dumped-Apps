@interface AWEPaySKMPayStatusSyncRequest : CJPayBaseRequest
+ (id)buildUrl:;
+ (void)pushMessageNotifyArrivedEventWithMsgId:msgType:;
+ (void)pushPayStatus:codeToken:;
+ (void)pushVoiceBroadcastSwitchOpenStatus:completion:;
@end
