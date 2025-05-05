@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer
@property (nonatomic) MFError error;
@property (nonatomic) q statusCode;
- (long long)statusCode;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (void)taskFailed:statusCode:error:;
- (void)resultsForMessageMove:;
- (id)initWithSourceRemoteIDs:destinationRemoteIDsBySourceRemoteIDs:failures:;
@end
