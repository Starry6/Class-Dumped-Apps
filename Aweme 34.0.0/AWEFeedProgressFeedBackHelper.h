@interface AWEFeedProgressFeedBackHelper : NSObject
@property (nonatomic) UIImpactFeedbackGenerator generator;
- (void)generateFeedback;
- (BOOL)shouldUseMainThread;
- (id)init;
- (void)setGenerator:;
- (void).cxx_destruct;
- (id)generator;
- (void)prepareFeedback;
+ (id)shared;
@end
