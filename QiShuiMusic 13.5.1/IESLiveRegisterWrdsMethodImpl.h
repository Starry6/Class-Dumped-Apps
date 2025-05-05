@interface IESLiveRegisterWrdsMethodImpl : IESLiveRegisterWrdsMethod
@property (nonatomic) NSArray messageTypes;
@property (nonatomic) <IESLivePiperProtocol> piper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callWithParamModel:completionHandler:;
- (id)messageTypes;
- (id)piper;
- (void)setMessageTypes:;
- (void)setPiper:;
- (void)subscribedSyncDataUpdatedWithValue:oldVersion:newVersion:;
- (void)subscribedSyncDataWithValue:version:;
- (void).cxx_destruct;
@end
