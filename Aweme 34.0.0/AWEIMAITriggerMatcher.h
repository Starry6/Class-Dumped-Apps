@interface AWEIMAITriggerMatcher : NSObject
@property (nonatomic) AWEIMInterEmojiMatcherController parent;
@property (nonatomic) BOOL isMatcherEnable;
- (BOOL)isMatcherEnable;
- (void)p_trackShowAnimationName:;
- (BOOL)tryMatchAndPlay;
- (void)setParent:;
- (id)parent;
- (id)initWithParent:;
- (void).cxx_destruct;
@end
