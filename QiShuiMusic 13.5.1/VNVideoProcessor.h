@interface VNVideoProcessor : NSObject
- (void)cancel;
- (id)initWithURL:;
- (void).cxx_destruct;
- (BOOL)addRequest:processingOptions:error:;
- (BOOL)addRequest:withProcessingOptions:error:;
- (BOOL)removeRequest:error:;
- (BOOL)analyzeWithTimeRange:error:;
- (BOOL)analyzeTimeRange:error:;
@end
