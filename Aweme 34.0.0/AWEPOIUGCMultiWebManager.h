@interface AWEPOIUGCMultiWebManager : NSObject
@property (nonatomic) NSMutableDictionary webManagerMap;
@property (nonatomic) NSArray albumImageList;
- (void)handleBroadcastNotification:;
- (void)setAlbumImageList:;
- (void)lynxContainerDealloc:;
- (void)handleH5Dealloc:;
- (id)webManagerMap;
- (void)setWebManagerMap:;
- (id)albumImageList;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
