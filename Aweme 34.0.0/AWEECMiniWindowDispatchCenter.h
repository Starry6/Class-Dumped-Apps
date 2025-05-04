@interface AWEECMiniWindowDispatchCenter : NSObject
- (id)getLiveSmallWindowService;
- (void)restoreDefaultTapAction;
- (void)subscribeAttachMiniWindowWithTarget:completion:;
- (void)unSubscribeAttachMiniWindowWithTarget:;
- (void)subscribeClickCloseWithTarget:completion:;
- (void)unSubscribeClickCloseWithTarget:;
- (void)subscribeCustomTapWithTarget:completion:;
- (void)subscribeCustomTapWithTarget:completion:liveResponse:;
- (void)unSubscribeCustomTapWithTarget:;
- (void)unSubscribeCustomTapWithAllTargets;
- (void)subscribeMuteStateChangedWithTarget:changedBlock:;
- (void)unSubscribeMuteStateChangedWithTarget:;
- (void)attach;
- (void)detach;
- (void).cxx_destruct;
- (void)setupData;
+ (id)shareInstance;
@end
