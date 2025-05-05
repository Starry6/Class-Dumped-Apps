@interface BWStillImageConditionalRouterConfiguration : NSObject
@property (nonatomic) I numberOfInputs;
@property (nonatomic) I numberOfOutputs;
@property (nonatomic) @? shouldEmitSampleBufferDecisionProvider;
- (void)dealloc;
- (unsigned int)numberOfInputs;
- (unsigned int)numberOfOutputs;
- (id)initWithNumberOfOutputs:;
- (id)shouldEmitSampleBufferDecisionProvider;
- (void)setShouldEmitSampleBufferDecisionProvider:;
@end
