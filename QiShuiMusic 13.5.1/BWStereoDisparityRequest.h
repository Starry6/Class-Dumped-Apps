@interface BWStereoDisparityRequest : NSObject
@property (nonatomic) NSInteger err;
@property (nonatomic) BWStereoDisparityProcessorInput input;
@property (nonatomic) <BWStillImageProcessorControllerDelegate> delegate;
- (id)input;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (void)setErr:;
@end
