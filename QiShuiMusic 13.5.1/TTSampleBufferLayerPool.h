@interface TTSampleBufferLayerPool : NSObject
- (id)getSBDLayer;
- (void)pushbackSBDLayer:;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)sharedPool;
@end
