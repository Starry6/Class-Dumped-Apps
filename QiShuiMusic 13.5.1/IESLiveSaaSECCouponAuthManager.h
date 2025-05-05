@interface IESLiveSaaSECCouponAuthManager : NSObject
@property (nonatomic) IESLiveSaaSECCouponAuthObj currentCouponObj;
@property (nonatomic) BDXBridgeEventSubscriber bridgeEventSubscriber;
- (void)receiveLoginActionNotification:;
- (void)addNotifications;
- (id)bridgeEventSubscriber;
- (void)couponAuthFlowEnvChanged:;
- (id)currentCouponObj;
- (void)restartCouponAuthPopupFlow;
- (void)setBridgeEventSubscriber:;
- (void)setCurrentCouponObj:;
- (void)stopCouponAuthPopupFlowIfNeed;
- (void)subscribeEvent;
- (id)init;
- (void).cxx_destruct;
+ (void)beginCouponAuthPopupFlowWithContext:;
+ (void)couponAuthFlowEnvChanged:;
+ (void)insertFollowOperationAfterCouponProcess:;
+ (BOOL)isShowingCouponAuthDialog;
+ (void)stopCouponAuthPopupFlowIfNeed;
+ (id)shared;
@end
