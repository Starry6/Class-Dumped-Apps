@interface AWEHotSpotPublishHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSMutableDictionary pubslihTaskMap;
@property (nonatomic) <AWEHotSpotPublishHelperDelegate> delegate;
- (void)task:didEndWithResult:error:;
- (void)markAllPublishTaskExpired;
- (void)startAlbumPageWithConfigParamsModel:;
- (void)startShotPageWithConfigParamsModel:;
- (void)startTextEditPageWithConfigParamsModel:;
- (id)collectCoreTrackParams:;
- (id)pubslihTaskMap;
- (void)showFloatingViewForPublishTask:;
- (void)insertCardTaskForPublishTask:withAweme:;
- (void)removePublishTask:;
- (void)setPubslihTaskMap:;
- (id)p_getLocalTextExtraInfoFromTask:;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
