@interface AWETransformerTrackContext : NSObject
@property (nonatomic) double rcvdDslTs;
@property (nonatomic) double rcvdDslMediaTs;
@property (nonatomic) double dslParsedCount;
@property (nonatomic) double elementTreeCreatedCount;
@property (nonatomic) double viewTreeCreatedCount;
@property (nonatomic) double transformerLayoutCount;
@property (nonatomic) double transformerUpdateLayoutCount;
@property (nonatomic) double transformerRenderTs;
- (double)rcvdDslMediaTs;
- (double)rcvdDslTs;
- (void)setRcvdDslTs:;
- (void)setRcvdDslMediaTs:;
- (double)dslParsedCount;
- (void)setDslParsedCount:;
- (double)elementTreeCreatedCount;
- (void)setElementTreeCreatedCount:;
- (double)viewTreeCreatedCount;
- (void)setViewTreeCreatedCount:;
- (double)transformerLayoutCount;
- (void)setTransformerLayoutCount:;
- (double)transformerUpdateLayoutCount;
- (void)setTransformerUpdateLayoutCount:;
- (double)transformerRenderTs;
- (void)setTransformerRenderTs:;
@end
