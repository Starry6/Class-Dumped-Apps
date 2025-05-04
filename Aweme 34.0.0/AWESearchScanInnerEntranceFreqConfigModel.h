@interface AWESearchScanInnerEntranceFreqConfigModel : NSObject
@property (nonatomic) q maxShowDaily;
@property (nonatomic) double seqNotClickDay;
@property (nonatomic) q seqDayNotClickTimes;
- (long long)maxShowDaily;
- (void)setMaxShowDaily:;
- (double)seqNotClickDay;
- (void)setSeqNotClickDay:;
- (long long)seqDayNotClickTimes;
- (void)setSeqDayNotClickTimes:;
@end
