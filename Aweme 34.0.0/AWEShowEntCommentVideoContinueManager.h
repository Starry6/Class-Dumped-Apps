@interface AWEShowEntCommentVideoContinueManager : NSObject
@property (nonatomic) BOOL isVideoPlayerPlaying;
- (BOOL)isVideoPlayerPlaying;
- (void)setIsVideoPlayerPlaying:;
+ (id)sharedInstance;
@end
