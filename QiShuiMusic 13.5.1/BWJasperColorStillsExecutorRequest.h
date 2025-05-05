@interface BWJasperColorStillsExecutorRequest : NSObject
@property (nonatomic) NSInteger err;
@property (nonatomic) BWJasperColorStillsExecutorInput input;
@property (nonatomic) <BWJasperColorStillsExecutorControllerDelegate> delegate;
- (id)input;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (void)setErr:;
@end
