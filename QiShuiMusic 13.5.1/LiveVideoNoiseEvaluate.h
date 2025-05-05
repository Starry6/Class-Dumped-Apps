@interface LiveVideoNoiseEvaluate : NSObject
@property (nonatomic) NSInteger videoNoiseEvaluateMask;
- (id)getReport;
- (void)setVideoNoiseEvaluateMask:;
- (int)videoNoiseEvaluateMask;
- (id)init;
- (void)dealloc;
- (int)process:;
- (void)clear;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)setup:;
@end
