@interface AWEIMFTSTrackClodStartSyncData : NSObject
@property (nonatomic) double startTimeInterval;
@property (nonatomic) double endTimeInterval;
@property (nonatomic) q type;
@property (nonatomic) q count;
- (void)recordStartWithTimeInterval:;
- (void)recordEndWithTimeInterval:;
- (void)setCount:;
- (long long)count;
- (long long)type;
- (void)setType:;
- (id)toDictionary;
- (double)endTimeInterval;
- (void)setEndTimeInterval:;
- (void)setStartTimeInterval:;
- (double)startTimeInterval;
@end
