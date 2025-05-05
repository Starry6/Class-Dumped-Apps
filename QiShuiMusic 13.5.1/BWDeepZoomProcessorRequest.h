@interface BWDeepZoomProcessorRequest : NSObject
@property (nonatomic) NSInteger err;
@property (nonatomic) BWDeepZoomProcessorInput input;
@property (nonatomic) <BWDeepZoomProcessorControllerDelegate> delegate;
- (id)input;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (void)setErr:;
@end
