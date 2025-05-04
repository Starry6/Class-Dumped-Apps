@interface AWEStudioFeedbackRecorderParseUtil : NSObject
+ (id)jsonStringEncoded:;
+ (id)jsonObjectDecoded:;
+ (id)sortItems:usingSortedNameArray:;
+ (id)parse:keyConfigBlock:handleItemBlock:sortBlock:;
@end
