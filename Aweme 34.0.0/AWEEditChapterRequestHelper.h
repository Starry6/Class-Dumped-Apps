@interface AWEEditChapterRequestHelper : NSObject
+ (id)POST:params:modelClass:completion:;
+ (id)reeditChapterWithParams:completion:;
+ (id)p_jsonStringEncoded:;
+ (id)reeditChapterWithItemID:chapterAbstract:chapterList:chapterType:chapterBarColor:completion:;
@end
