@interface BWJasperDisparityProcessorRequest : NSObject
@property (nonatomic) NSInteger err;
@property (nonatomic) BWJasperDisparityProcessorInput input;
@property (nonatomic) <BWJasperDisparityProcessorControllerDelegate> delegate;
- (id)input;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithInput:delegate:;
- (int)err;
- (void)setErr:;
@end
