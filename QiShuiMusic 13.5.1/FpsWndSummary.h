@interface FpsWndSummary : NSObject
@property (nonatomic) double avgPreviewFps;
@property (nonatomic) NSInteger minus1FpsCount;
@property (nonatomic) NSInteger minus3FpsCount;
@property (nonatomic) NSInteger totalCount;
- (double)avgPreviewFps;
- (int)minus1FpsCount;
- (int)minus3FpsCount;
- (void)setAvgPreviewFps:;
- (void)setMinus1FpsCount:;
- (void)setMinus3FpsCount:;
- (int)totalCount;
- (void)setTotalCount:;
@end
