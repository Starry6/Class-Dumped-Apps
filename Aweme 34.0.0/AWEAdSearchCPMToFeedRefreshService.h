@interface AWEAdSearchCPMToFeedRefreshService : HTSService
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) NSDictionary awemeInfo;
@property (nonatomic) BOOL disableTrack;
@property (nonatomic) NSMutableDictionary supportedSearchSources;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeInfo;
- (void)setAwemeInfo:;
- (void)setDisableTrack:;
- (BOOL)shouldTrackEvent:scene:;
- (BOOL)disableTrack;
- (id)supportedSearchSources;
- (BOOL)supportSearchSource:scene:;
- (void)setSupportedSearchSources:;
- (void)registerSupportSearchSource:scene:;
- (void)trackWithParams:scene:;
- (void)trackWithParamsInFlow:;
- (id)semaphore;
- (id)init;
- (void)setSemaphore:;
- (void).cxx_destruct;
- (void)reset;
@end
