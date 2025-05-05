@interface AVSampleBufferGeneratorBatch : NSObject
@property (nonatomic) AVSampleBufferGenerator _generator;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (id)_completionHandler;
- (id)_generator;
- (id)initWithGenerator:;
- (BOOL)isOpenToRequests;
- (id)createAndAddSampleBufferForRequest:error:;
- (void)makeDataReadyWithCompletionHandler:;
@end
