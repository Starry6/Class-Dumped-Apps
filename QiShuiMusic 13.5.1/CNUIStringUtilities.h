@interface CNUIStringUtilities : NSObject
+ (long long)composedCharacterCountForString:;
+ (long long)composedCharacterCountForString:containsEmoji:;
+ (BOOL)stringContainsEmoji:;
+ (BOOL)stringIsSingleEmoji:;
@end
