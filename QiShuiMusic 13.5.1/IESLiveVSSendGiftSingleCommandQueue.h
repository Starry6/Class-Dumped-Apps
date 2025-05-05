@interface IESLiveVSSendGiftSingleCommandQueue : IESLiveVSSendGiftCommandQueue
@property (nonatomic) @? completion;
@property (nonatomic) NSError error;
- (void)handleFinishCommand:error:shouldEnd:;
- (void)runCommand:completion:;
- (id)completion;
- (void)setCompletion:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (void)willEnd;
@end
