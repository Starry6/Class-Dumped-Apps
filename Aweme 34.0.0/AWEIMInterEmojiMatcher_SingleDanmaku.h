@interface AWEIMInterEmojiMatcher_SingleDanmaku : AWEIMInterEmojiBaseMatcher
@property (nonatomic) NSNumber enableNum;
@property (nonatomic) NSPointerArray fromMessages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isMatcherEnable;
- (long long)matcherType;
- (id)preferedRelations;
- (BOOL)tryMatch;
- (void)willShowAnimation;
- (BOOL)canDelayShowAnimtaion;
- (id)enableNum;
- (void)setEnableNum:;
- (void).cxx_destruct;
@end
