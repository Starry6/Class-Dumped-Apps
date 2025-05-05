@interface SFRemoteHotspotSession : NSObject
@property (nonatomic) BOOL browsing;
@property (nonatomic) <SFRemoteHotspotProtocol> connectionProxy;
@property (nonatomic) <SFRemoteHotspotSessionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)enableHotspotForDevice:withCompletionHandler:;
- (void)updatedFoundDeviceList:;
- (void)setDelegate:;
- (void)xpcManagerConnectionInterrupted;
- (void)setBrowsing:;
- (void)updateLowLatencyFilter:isAddFilter:withCompletionHandler:;
- (id)delegate;
- (BOOL)browsing;
- (void)enableRemoteHotspotForDevice:withCompletionHandler:;
- (void)startBrowsing;
- (void).cxx_destruct;
- (id)connectionProxy;
- (void)setConnectionProxy:;
- (void)stopBrowsing;
@end
