@interface ICCloudClientAvailabilityService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) <ICCloudServerListenerEndpointProviding> listenerEndpointProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowCloudMusic;
- (BOOL)isCellularDataRestricted;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (id)serialQueue;
- (BOOL)canShowCloudVideo;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (id)xpcConnection;
- (BOOL)canShowCloudDownloadButtons;
- (void).cxx_destruct;
- (id)listenerEndpointProvider;
- (id)initWithListenerEndpointProvider:;
- (id)_xpcConnectionWithListenerEndpoint:;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)isCellularDataRestrictedForVideos;
@end
