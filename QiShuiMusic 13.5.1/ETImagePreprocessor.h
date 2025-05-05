@interface ETImagePreprocessor : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithImagePreprocessParams:;
- (id)tensorWithCGImage:;
- (id)tensorWithPath:;
- (void)preprocess;
- (void)loadSrcBufferWithCGImage:;
@end
