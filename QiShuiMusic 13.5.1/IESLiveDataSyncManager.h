@interface IESLiveDataSyncManager : NSObject
@property (nonatomic) NSMutableDictionary roomDataDic;
@property (nonatomic) NSMutableDictionary subscriberDic;
@property (nonatomic) <IESLiveIMMessageReciever> receiver;
@property (nonatomic) double waitTimeMS;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) # syncDataClass;
@property (nonatomic) @? dataSyncModelCreateBlock;
- (void)logWith:params:;
- (void)runOnMainQueue:;
- (void)setRoomDataDic:;
- (id)heartbeatPacket;
- (void)addSubscriber:withKey:;
- (void)addSubscriber:withSyncData:;
- (void)addSubscriber:withSyncDatas:;
- (id)createRoomDataSyncModelWith:;
- (id)dataSyncModelCreateBlock;
- (void)getMessage:withSubkey:completion:;
- (id)getSyncDataKeyFromClass:;
- (void)getValueWithKey:expectedMinVersion:completion:;
- (void)getValueWithSyncData:completion:;
- (void)getValueWithSyncData:expectedMinVersion:completion:;
- (void)handleAddSubscriberCallbackWithClass:subscriber:syncKey:storeKey:cacheModel:;
- (void)handleUpdateSubscriberCallbackWithClass:subscriber:storeKey:value:oldVersion:newVersion:;
- (void)handleWRDSMessage:;
- (Class)messageClassFromSyncKey:;
- (id)p_createHeartbeatItemWithKey:;
- (id)parseMessageData:forKey:;
- (id)parseSyncKeyFromStoreKey:;
- (id)roomDataDic;
- (void)setDataSyncModelCreateBlock:;
- (void)setSubscriberDic:;
- (void)setSyncDataClass:;
- (void)setWaitTimeMS:;
- (BOOL)shouldReceiveMessage:;
- (id)storedKey:;
- (void)subscribedKeyUpdated:value:old:new:;
- (id)subscriberDic;
- (double)waitTimeMS;
- (id)receiver;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (void)setReceiver:;
- (void)messageReceived:;
- (Class)syncDataClass;
@end
