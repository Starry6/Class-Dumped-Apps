@interface AWEPreloadVideoManager : NSObject
@property (nonatomic) BOOL isRequestingPreloadVideo;
- (id)getExpectedSizeInfo;
- (void)preloadVideoForKeyword:currentAweme:preloadCount:completion:;
- (BOOL)isRequestingPreloadVideo;
- (void)setIsRequestingPreloadVideo:;
+ (void)preloadHotSpotVideosForAwemeModel:;
+ (id)sharedInstance;
@end
