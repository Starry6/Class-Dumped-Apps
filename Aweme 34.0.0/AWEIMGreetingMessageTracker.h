@interface AWEIMGreetingMessageTracker : NSObject
+ (id)greetingEmojiParamsWithMessage:conversation:;
+ (void)trackClickGreetingEmoticon:showedIndex:message:conversation:;
+ (void)trackDisplayGreetingEmoticonIfNeeded:showedIndex:message:conversation:displayedSet:;
+ (id)emojiSituationWithMessage:;
+ (id)p_trackParamsWithEmoticon:showedIndex:message:conversation:;
@end
