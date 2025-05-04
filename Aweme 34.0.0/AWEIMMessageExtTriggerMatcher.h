@interface AWEIMMessageExtTriggerMatcher : NSObject
@property (nonatomic) AWEIMInterEmojiMatcherController parent;
@property (nonatomic) BOOL formatMatchEnable;
@property (nonatomic) BOOL isMatcherEnable;
- (BOOL)isMatcherEnable;
- (void)p_trackShowAnimationName:;
- (BOOL)tryMatchAndPlay;
- (BOOL)formatMatchEnable;
- (void)p_trackFormatShowAnimation:sourceName:;
- (void)setFormatMatchEnable:;
- (void)setParent:;
- (id)parent;
- (id)initWithParent:;
- (void).cxx_destruct;
@end
