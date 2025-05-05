@interface RAWFilter : CIFilter
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)takeAttributesFromDictionary:;
- (void)takeAttributesFromDictionary:forKeys:;
- (void)setPrimitiveNumberValue:inVariable:forKey:;
- (id)apply:image:extent:roiCallback:arguments:inoutSpace:;
- (id)apply:image:extent:roiCallback:arguments:inoutSpace:isAlphaOne:;
- (id)apply:image:arguments:inoutSpace:isPremultiplied:;
- (id)apply:image:arguments:inoutSpace:isPremultiplied:isAlphaOne:;
- (id)applyMatrixToImage:vectorR:vectorG:vectorB:vectorBias:inSpace:outSpace:;
+ (id)filterWithName:;
+ (id)filterWithDefaultsForName:;
+ (id)filterWithDefaultsForClass:;
@end
