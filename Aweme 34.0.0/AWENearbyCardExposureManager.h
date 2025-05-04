@interface AWENearbyCardExposureManager : NSObject
@property (nonatomic) NSMutableDictionary cardSerialDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playerDidReadyForDisplay:;
- (id)modelForPlayer:;
- (id)storageKey;
- (id)cardSerialDictionary;
- (void)handleCardActionShowWithID:params:;
- (void)deleteOutCardSerial;
- (void)localSaveCardSerial;
- (id)getModelWithCardID:;
- (id)requestExposureParamsObject;
- (void)recordCardSerialWithCardAction:poiCardID:params:;
- (id)rejectCardErrorCodeAndReasonWithResp:;
- (void)setCardSerialDictionary:;
- (id)init;
- (void)addObserver;
- (void).cxx_destruct;
+ (id)getUnexposedMsgForCode:;
@end
