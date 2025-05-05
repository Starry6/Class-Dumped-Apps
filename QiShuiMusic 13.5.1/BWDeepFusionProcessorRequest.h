@interface BWDeepFusionProcessorRequest : NSObject
@property (nonatomic) BWDeepFusionProcessorInput input;
@property (nonatomic) <BWDeepFusionProcessorControllerDelegate> delegate;
@property (nonatomic) <IBPDeepFusionOutput> output;
@property (nonatomic) NSInteger err;
@property (nonatomic) NSInteger demosaicedRawErr;
@property (nonatomic) BOOL cacheBuffers;
- (id)output;
- (id)input;
- (void)dealloc;
- (void)setOutput:;
- (id)delegate;
- (id)description;
- (int)err;
- (void)setErr:;
- (int)demosaicedRawErr;
- (void)setDemosaicedRawErr:;
- (BOOL)cacheBuffers;
- (void)setCacheBuffers:;
@end
