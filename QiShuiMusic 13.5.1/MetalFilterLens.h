@interface MetalFilterLens : FilterBase
- (void)configFilter:;
- (id)getEffectPatameterStr;
- (void)initModelWithMTLDevice:MTLLibrary:MTLCommandQueue:width:height:license:;
- (id)initWithLivingStream:isMultiMode:currentMode:enable15SR:;
- (id)initWithLivingStream:isMultiMode:currentMode:enable15SR:licenseName:;
- (void)dealloc;
- (id)process:;
- (void)setEffect:;
- (int)getValueForKey:;
- (void).cxx_destruct;
@end
