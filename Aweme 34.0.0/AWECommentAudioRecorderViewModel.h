@interface AWECommentAudioRecorderViewModel : NSObject
@property (nonatomic) Q state;
@property (nonatomic) double leftTime;
- (double)leftTime;
- (void)setLeftTime:;
- (unsigned long long)state;
- (void)setState:;
@end
