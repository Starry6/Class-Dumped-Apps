@interface AWEIMChapterMessageUtils : NSObject
+ (id)getChapterMessageModel:;
+ (void)setChapterMessageModel:uniqueId:;
+ (BOOL)awemeAvailableWithID:;
+ (long long)chapterAvailableWithID:chapterIndex:;
@end
