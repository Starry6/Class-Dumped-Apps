@interface AudioGraphPool : NSObject
- (id)getAudioGraphWithInputDataFormat:outputDataFormat:;
- (void)pushbackAudioGraph:;
- (void)willTerminal;
- (id)init;
- (void)clearPool;
- (void)close;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)sharedPool;
@end
