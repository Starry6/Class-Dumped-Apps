@interface VCPVideoProcessor : NSObject
@property (nonatomic) @? progressHandler;
- (void)setProgressHandler:;
- (id)progressHandler;
- (void)cancel;
- (id)initWithURL:;
- (void).cxx_destruct;
- (BOOL)addRequest:withConfiguration:error:;
- (BOOL)analyzeWithStart:andDuration:error:;
- (BOOL)removeRequest:error:;
- (BOOL)_analyzeWithStart:andDuration:error:;
@end
