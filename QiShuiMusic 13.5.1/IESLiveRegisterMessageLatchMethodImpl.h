@interface IESLiveRegisterMessageLatchMethodImpl : IESLiveRegisterMessageLatchMethod
@property (nonatomic) NSMutableDictionary messageModelMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)messageModelMap;
- (void)callWithParamModel:completionHandler:;
- (void)didSetAttachingDIContext;
- (id)getRegisterMessageLatchAdaptor;
- (void)onMessageReceivce:withDict:;
- (void)setMessageModelMap:;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
