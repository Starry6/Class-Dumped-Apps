@interface AWEPlayletWatchForFreeRightInfoModel : AWEBaseApiModel
@property (nonatomic) BOOL hasRight;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSArray rightSourcesArray;
- (id)initWithJsonStr:;
- (void)setHasRight:;
- (id)rightSourcesArray;
- (void)setRightSourcesArray:;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (id)initWithDict:;
- (double)startTime;
- (BOOL)hasRight;
@end
