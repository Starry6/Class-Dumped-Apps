@interface BWIntelligentDistortionCorrectionProcessorRequest : NSObject
@property (nonatomic) BWIntelligentDistortionCorrectionProcessorInput input;
@property (nonatomic) <BWStillImageProcessorControllerDelegate> delegate;
@property (nonatomic) NSInteger err;
- (id)input;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (void)setErr:;
@end
