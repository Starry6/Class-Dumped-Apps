@interface AWEPluginRoomInfoImpl : NSObject
@property (nonatomic) <BDPNetworkTaskProtocol> getRoomInfoNetRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getRoomInfoNetRequest;
- (void)setGetRoomInfoNetRequest:;
- (void)bdp_getRoomInfoForUniqueID:completion:;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end
