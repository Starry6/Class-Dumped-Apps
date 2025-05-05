@interface IESLiveVideoPlayerConfig : NSObject
@property (nonatomic) NSMutableDictionary videoDictionary;
- (double)getVideoCurrentTime:;
- (void)setVideoDictionary:;
- (void)updateVideoTime:videoId:;
- (id)init;
- (void).cxx_destruct;
- (id)videoDictionary;
+ (id)sharedConfig;
@end
