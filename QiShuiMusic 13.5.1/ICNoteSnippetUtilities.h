@interface ICNoteSnippetUtilities : NSObject
+ (id)snippetForContent:;
+ (id)rangeForTitleInContent:truncated:;
+ (id)titleForContent:truncated:;
+ (id)stringByRemovingTitle:fromString:;
+ (id)snippetAndTitleTrimCharacterSet;
@end
