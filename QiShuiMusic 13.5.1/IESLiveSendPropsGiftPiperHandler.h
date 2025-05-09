@interface IESLiveSendPropsGiftPiperHandler : NSObject
@property (nonatomic) <IESLivePiperProtocol> piper;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomService;
@property (nonatomic) NSMutableDictionary identifierToComboCount;
@property (nonatomic) NSMutableDictionary identifierToTransaction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
- (void)setRoomService:;
- (void)setShouldLazyCreateCallHandler:;
- (void)didGiveGiftWithResponse:;
- (void)didSetAttachingDIContext;
- (id)getStringFromObj:;
- (id)identifierToComboCount;
- (id)identifierToTransaction;
- (void)p_bindPrimaryEffectIfNeedWithGift:;
- (BOOL)p_isVSRoom;
- (void)p_sendGiftInNormalRoomWithGift:seriesInfo:Result:callback:;
- (BOOL)p_shouldSkipDiamondCheck;
- (long long)p_showRedeemFromTypeFromGiftSource:;
- (id)piper;
- (void)registerHandlerWithBridge:;
- (id)roomService;
- (id)sendGiftCallHandler;
- (void)sendGiftWithResult:callback:;
- (id)sendPropsCallHandler;
- (void)setIdentifierToComboCount:;
- (void)setIdentifierToTransaction:;
- (void)setPiper:;
- (BOOL)shouldLazyCreateCallHandler;
- (void)showChargePanelWithTargetDiamond:;
- (id)init;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
