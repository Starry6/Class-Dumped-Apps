@interface MFHTMLParser : NSObject
+ (id)plainTextFromHTMLSnippet:;
+ (id)plainTextFromHTML:limit:preserveNewlines:;
+ (id)plainTextFromHTML:limit:;
+ (id)plainTextFromHTML:;
@end
