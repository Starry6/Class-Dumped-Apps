@interface IESLiveMessageInteractionAssetFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveMessageInteractionAssetApi assetApi;
@property (nonatomic) BOOL didMount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealInteractionAssetData:error:;
- (void)componentCreate;
- (id)assetApi;
- (void)broadcastAssetUpdateWith:;
- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (BOOL)didMount;
- (void)fetchAsset:;
- (void)realFetchAsset;
- (void)remoteRoomDataReady:;
- (void)setAssetApi:;
- (void)setDidMount:;
- (BOOL)subscribeBackendDataWithInteractionAsset;
- (void).cxx_destruct;
- (void)messageReceived:;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
