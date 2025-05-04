@interface AWEIMFormatTriggerMatcher : NSObject
@property (nonatomic) AWEIMInterEmojiMatcherController parent;
@property (nonatomic) NSString effectKeyWord;
- (BOOL)tryMatchAndPlay;
- (id)p_matchKeyWord:;
- (void)p_trackEffectShow:sourceName:;
- (void)setEffectKeyWord:;
- (id)effectKeyWord;
- (void)setParent:;
- (id)parent;
- (id)initWithParent:;
- (void).cxx_destruct;
@end
