@interface InpaintingExecutionContext : NSObject
@property (nonatomic) NSInteger lastNumberOfTilesUsed;
@property (nonatomic) NSString lastModelResourceUsed;
@property (nonatomic) NSInteger lastInpaintingModeUsed;
- (id)processingResolutionsLog;
- (id)init;
- (void)dealloc;
- (void)setLastModelResourceUsed:;
- (double)lastExecutionTime;
- (int)lastProcessingResolution;
- (void)setLastInpaintingModeUsed:;
- (void)appendProcessingResolution:andTime:;
- (int)filterProcessingCount;
- (void)setLastNumberOfTilesUsed:;
- (int)lastInpaintingModeUsed;
- (id)CIImageProcessorDigestObject;
- (int)lastNumberOfTilesUsed;
- (id)lastModelResourceUsed;
- (id)executionTimesLog;
@end
