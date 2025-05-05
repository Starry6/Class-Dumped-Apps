@interface IESECGoodFeedMallCardStorage : NSObject
- (void)addRecordWithAwemeID:;
- (id)getCurrentTimeStamp;
+ (id)lastShowAwemeID;
+ (id)lastShowTime;
+ (void)setLastShowAwemeID:;
+ (void)setLastShowTime:;
@end
