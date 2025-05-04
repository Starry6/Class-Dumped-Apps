@interface AWEMRCommonSubscribePanelManager : HTSService
@property (nonatomic) AWEMRCommonSubscribePanelTask task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)requestPanelWithModel:completion:;
- (void)cancelPanelWithPopId:enterFrom:completion:;
- (id)generatePanelTriggerMonitor;
- (void)trackSLOWithMonitor:status:errorCode:errorDesc:;
- (void)taskCancelled:;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)requestPanelWithModel:completion:;
+ (void)cancelPanelWithPopId:enterFrom:completion:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
