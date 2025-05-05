@interface BWLearnedNRRequest : NSObject
@property (nonatomic) NSInteger err;
@property (nonatomic) BWLearnedNRInput input;
@property (nonatomic) BWLearnedNROutput output;
@property (nonatomic) <BWLearnedNRProcessorControllerDelegate> delegate;
- (id)output;
- (id)input;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (void)setErr:;
@end
