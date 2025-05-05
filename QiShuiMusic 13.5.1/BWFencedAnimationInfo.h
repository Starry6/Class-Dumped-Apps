@interface BWFencedAnimationInfo : NSObject
@property (nonatomic) FigCaptureMachPortSendRight fencePortSendRight;
@property (nonatomic) q fencePortGenerationCount;
- (void)dealloc;
- (id)description;
- (id)initWithFencePortSendRight:;
- (long long)fencePortGenerationCount;
- (id)fencePortSendRight;
@end
