@interface FrontendDNNEspressoModel : ADEspressoRunner
@property (nonatomic) ADEspressoBufferHandle inputBufferHandle;
@property (nonatomic) ADEspressoBufferHandle resultsOutputXBufferHandle;
@property (nonatomic) ADEspressoBufferHandle stdOutputXBufferHandle;
@property (nonatomic) ADEspressoBufferHandle resultsOutputYBufferHandle;
@property (nonatomic) ADEspressoBufferHandle stdOutputYBufferHandle;
@property (nonatomic) ADEspressoBufferHandle resultsOutputZBufferHandle;
@property (nonatomic) ADEspressoBufferHandle stdOutputZBufferHandle;
- (void).cxx_destruct;
- (BOOL)initializeInputOutputBlobs;
- (int)processImage:withSize:result:;
- (id)inputBufferHandle;
- (void)setInputBufferHandle:;
- (id)resultsOutputXBufferHandle;
- (void)setResultsOutputXBufferHandle:;
- (id)stdOutputXBufferHandle;
- (void)setStdOutputXBufferHandle:;
- (id)resultsOutputYBufferHandle;
- (void)setResultsOutputYBufferHandle:;
- (id)stdOutputYBufferHandle;
- (void)setStdOutputYBufferHandle:;
- (id)resultsOutputZBufferHandle;
- (void)setResultsOutputZBufferHandle:;
- (id)stdOutputZBufferHandle;
- (void)setStdOutputZBufferHandle:;
@end
