@interface AWESearchPhotoSearchEntranceDisplayStrategy : NSObject
+ (BOOL)entrancePopOverEnable;
+ (void)asyncGetLatestPhotoCreateTimeCompletion:;
+ (double)latestPhotoCreateTime;
+ (void)needShowPopOverWithCompletion:;
+ (void)invokePhotoSearch;
+ (double)timeNow;
@end
