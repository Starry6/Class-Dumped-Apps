@interface IESLiveRegisterSendGiftEventMethodImpl : IESLiveRegisterSendGiftEventMethod
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL needHandleSendGiftResponse;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callWithParamModel:completionHandler:;
- (void)didGiveGiftWithResponse:;
- (void)didSetAttachingDIContext;
- (id)disposable;
- (BOOL)needHandleSendGiftResponse;
- (void)setDisposable:;
- (void)setNeedHandleSendGiftResponse:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
