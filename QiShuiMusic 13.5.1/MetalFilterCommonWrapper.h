@interface MetalFilterCommonWrapper : FilterBase
@property (nonatomic) FilterBase filterInstance;
- (BOOL)isUsing;
- (id)filterInstance;
- (id)getEffectPatameterStr;
- (float)getFloatValueForKey:;
- (id)getStringValueForKey:;
- (id)releaseFilter;
- (void)setFilterInstance:;
- (void)setIntValue:forKey:;
- (void)setIsUsing:;
- (void)setValue:forKey:;
- (id)process:;
- (void)setEffect:;
- (int)getValueForKey:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFilter:;
@end
