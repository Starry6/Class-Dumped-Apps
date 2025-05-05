@interface QLAnimatedImage : NSObject
- (unsigned long long)frameCount;
- (void)dealloc;
- (void).cxx_destruct;
- (double)duration;
- (id)frameAtTime:;
- (id)initWithImageSource:;
- (long long)indexForTime:;
- (void)generateDurations;
- (BOOL)time:belongsToIndex:;
@end
