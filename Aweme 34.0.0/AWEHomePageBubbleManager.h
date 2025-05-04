@interface AWEHomePageBubbleManager : NSObject
@property (nonatomic) AWEHomePageBubbleTask holdingTask;
@property (nonatomic) BOOL remedy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)alertDismissByPopViewManager:;
- (void)showWithCloseCallback:;
- (void)onAlertCanceled;
- (BOOL)isBubbleBlocking;
- (void)setHoldingTask:;
- (id)holdingTask;
- (void)setRemedy:;
- (long long)canShowBubbleWithTask:businessID:scene:hasHoldTask:pendingTime:;
- (BOOL)remedy;
- (BOOL)enableTryShowLogicFix;
- (void)callTryShowTimeout:;
- (void)tryShowBubbleWithTask:;
- (long long)canShowBubbleWithBusinessID:scene:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
