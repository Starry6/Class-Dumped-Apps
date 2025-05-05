@interface BWDeferredProcessorRequest : NSObject
@property (nonatomic) NSInteger err;
@property (nonatomic) BWDeferredProcessorControllerInput input;
@property (nonatomic) <BWDeferredProcessorControllerDelegate> delegate;
- (id)input;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (void)setErr:;
@end
