@interface MetalFilterLensWrapper : FilterBase
@property (nonatomic) MetalFilterLens lensInstance;
- (id)getEffectPatameterStr;
- (id)initWithLens:;
- (id)lensInstance;
- (void)setLensInstance:;
- (void)setValue:forKey:;
- (void)dealloc;
- (id)process:;
- (void)setEffect:;
- (int)getValueForKey:;
- (void).cxx_destruct;
@end
