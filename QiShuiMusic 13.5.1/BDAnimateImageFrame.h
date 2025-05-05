@interface BDAnimateImageFrame : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) Q index;
@property (nonatomic) double delay;
@property (nonatomic) double nextFrameTime;
- (void)setNextFrameTime:;
- (double)delay;
- (void)setImage:;
- (void)setDelay:;
- (unsigned long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)image;
- (double)nextFrameTime;
@end
