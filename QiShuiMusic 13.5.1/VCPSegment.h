@interface VCPSegment : NSObject
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) Q numOfFrames;
@property (nonatomic) Q numOfValidFrames;
@property (nonatomic) float curationScore;
- (id)timeRange;
- (id)init;
- (float)score;
- (void)setTimeRange:;
- (void)setCurationScore:;
- (float)curationScore;
- (id)initWithTimestamp:score:valid:;
- (void)updateWithFirstFrame:score:valid:;
- (void)updateSegment:score:valid:;
- (void)mergeSegment:;
- (void)copyFrom:;
- (void)updateDuration:;
- (void)trimSegment:fromStart:;
- (BOOL)isContentTooShort;
- (float)sumOfScore;
- (unsigned long long)numOfFrames;
- (unsigned long long)numOfValidFrames;
@end
