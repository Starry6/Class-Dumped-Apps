@interface AWESearchPhotoSearchEntranceHelper : NSObject
+ (void)invokePhotoSearch;
+ (void)showPopOverWithConfigBlock:clickBlock:;
+ (void)fetchLatestPhotoCompletion:;
+ (void)showPopOverIfNeededWithConfigBlock:clickBlock:;
@end
