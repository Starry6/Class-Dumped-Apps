@interface SIPeopleSegmentation : SIModel
@property (nonatomic) C snapEveryFrameCount;
- (void)dealloc;
- (id)getOutputResolution;
- (void)setSnapEveryFrameCount:;
- (id)initWithNetworkConfiguration:;
- (id)getInputResolution;
- (BOOL)switchNetworkConfiguration:;
- (long long)evaluateSemanticsForImage:andOutputSurface:;
- (void)copyResultsToOtherBuffers:;
- (void)_initTemporalBuffer;
- (unsigned char)snapEveryFrameCount;
+ (id)getOutputResolution;
+ (id)getInputResolution;
@end
