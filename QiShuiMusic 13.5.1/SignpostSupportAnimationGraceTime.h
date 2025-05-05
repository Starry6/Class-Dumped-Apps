@interface SignpostSupportAnimationGraceTime : NSObject
@property (nonatomic) Q animationType;
@property (nonatomic) Q firstFrameGraceTimeMs;
- (unsigned long long)animationType;
- (id)initWithAnimationType:firstFrameGraceTimeMs:;
- (unsigned long long)firstFrameGraceTimeMs;
- (void)setFirstFrameGraceTimeMs:;
@end
