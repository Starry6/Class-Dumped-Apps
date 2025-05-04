@interface AWEVideoRouterMusicService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createVideoWithMusic:withInfo:;
- (BOOL)isVideoMusicSelectRoute;
- (id)createVideoWithMusic:withInfo:commercialAnchorModel:;
- (void)preloadHotMusic;
- (id)changeMusicWithSticker:inputData:originalMusicDownloadFailed:;
- (id)jsonObjectDecoded:;
@end
