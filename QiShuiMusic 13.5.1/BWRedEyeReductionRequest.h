@interface BWRedEyeReductionRequest : NSObject
@property (nonatomic) BWRedEyeReductionControllerInput input;
@property (nonatomic) <BWRedEyeReductionControllerDelegate> delegate;
@property (nonatomic) NSInteger mode;
- (id)input;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)mode;
- (void)setMode:;
- (id)initWithInput:delegate:;
@end
