@interface BWStillImageProcessorControllerRequest : NSObject
@property (nonatomic) NSInteger err;
@property (nonatomic) BWStillImageProcessorControllerInput input;
@property (nonatomic) <BWStillImageProcessorControllerDelegate> delegate;
- (id)input;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithInput:delegate:;
- (BOOL)readyForProcessing;
- (int)err;
- (void)setErr:;
@end
