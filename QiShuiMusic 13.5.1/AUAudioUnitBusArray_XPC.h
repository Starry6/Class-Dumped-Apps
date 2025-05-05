@interface AUAudioUnitBusArray_XPC : AUAudioUnitBusArray
- (BOOL)isCountChangeable;
- (id)initWithOwner:scope:busses:countWritable:;
- (BOOL)setBusCount:error:;
@end
