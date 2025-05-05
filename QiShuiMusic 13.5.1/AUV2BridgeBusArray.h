@interface AUV2BridgeBusArray : AUAudioUnitBusArray
- (id)initWithOwner:scope:;
- (BOOL)isCountChangeable;
- (BOOL)setBusCount:error:;
@end
