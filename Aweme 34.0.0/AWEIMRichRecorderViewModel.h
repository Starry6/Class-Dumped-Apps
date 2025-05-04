@interface AWEIMRichRecorderViewModel : NSObject
@property (nonatomic) Q state;
@property (nonatomic) double leftTime;
@property (nonatomic) BOOL isFormatScene;
- (BOOL)isFormatScene;
- (double)leftTime;
- (void)setLeftTime:;
- (void)setIsFormatScene:;
- (unsigned long long)state;
- (void)setState:;
@end
