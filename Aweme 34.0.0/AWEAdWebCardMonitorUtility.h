@interface AWEAdWebCardMonitorUtility : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)liveWebCardReceiveMonitorWithAdInfo:;
+ (void)webCardAdVideoShowWithModel:;
+ (void)webCardPreloadStart:;
+ (void)webCardPreloadResult:model:failReason:;
+ (void)webCardAdtraceTryShow:;
+ (void)webCardAdShowResult:model:failReason:;
+ (BOOL)hasCardDataWithAweme:;
+ (BOOL)shouldShowLynxCardWithAwemeModel:;
+ (void)webCardReceiveMonitorWithModel:;
+ (id)monitorAdExtraDataWithAweme:;
+ (id)eventStringFromReferString:;
+ (id)adRitFromReferString:;
@end
