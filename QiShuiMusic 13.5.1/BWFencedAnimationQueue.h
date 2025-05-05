@interface BWFencedAnimationQueue : NSObject
@property (nonatomic) Q count;
- (void)dealloc;
- (void)flush;
- (unsigned long long)count;
- (id)initWithQueueSize:;
- (void)enqueueFencedAnimation:;
- (id)dequeueFencedAnimation;
@end
