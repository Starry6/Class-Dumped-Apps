@interface AWEIMInterEmojiMatcher_Continuation : AWEIMInterEmojiBaseMatcher
@property (nonatomic) NSPointerArray fromMessages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isMatcherEnable;
- (BOOL)isRelationEnable:;
- (long long)matcherType;
- (id)preferedRelations;
- (BOOL)tryMatch;
- (void)willShowAnimation;
- (BOOL)canDelayShowAnimtaion;
@end
