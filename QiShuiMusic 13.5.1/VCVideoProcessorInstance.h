@interface VCVideoProcessorInstance : NSObject
- (id)getFilter:index:;
- (id)getVideoProcessor;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (void)setLogCallback:;
+ (void)setLogCallbackLevel:;
+ (void)setLogErrorCallbackFirstOnly:;
+ (void)setLogPrintLevel:;
+ (id)sharedInstance;
@end
