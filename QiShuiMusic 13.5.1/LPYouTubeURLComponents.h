@interface LPYouTubeURLComponents : NSObject
@property (nonatomic) NSString videoID;
@property (nonatomic) double startTime;
- (void)setStartTime:;
- (double)startTime;
- (void).cxx_destruct;
- (id)videoID;
- (void)setVideoID:;
+ (BOOL)parseYouTubeTimeFormat:outTime:;
+ (id)formatAsYouTubeTime:;
@end
