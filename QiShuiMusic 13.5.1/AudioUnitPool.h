@interface AudioUnitPool : NSObject
- (id)getAudioUnit;
- (void)pushbackAudioUnit:;
- (void)willTerminal;
- (id)init;
- (void)clearPool;
- (void)close;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)sharedPool;
@end
