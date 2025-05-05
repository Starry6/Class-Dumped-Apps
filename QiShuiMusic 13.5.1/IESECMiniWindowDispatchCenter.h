@interface IESECMiniWindowDispatchCenter : NSObject
- (void)unSubscribeCustomTapWithTarget:;
- (void)subscribeAttachMiniWindowWithTarget:completion:;
- (void)subscribeClickCloseWithTarget:completion:;
- (void)subscribeCustomTapWithTarget:completion:;
- (void)subscribeMuteStateChangedWithTarget:changedBlock:;
- (void)unSubscribeAttachMiniWindowWithTarget:;
- (void)unSubscribeClickCloseWithTarget:;
- (void)unSubscribeMuteStateChangedWithTarget:;
- (void)detach;
- (void)attach;
- (void).cxx_destruct;
- (void)setupData;
+ (id)shareInstance;
@end
