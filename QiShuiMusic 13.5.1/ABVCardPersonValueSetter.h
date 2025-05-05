@interface ABVCardPersonValueSetter : ABVCardValueSetter
- (id)fullName;
- (void)dealloc;
- (id)imageData;
- (id)valueForProperty:;
- (BOOL)setValue:forProperty:;
- (id)initWithPerson:;
- (BOOL)setImageData:cropRectX:cropRectY:cropRectWidth:cropRectHeight:;
- (void)setValueInTemporaryCache:forProperty:;
- (id)foundProperties;
+ (id)supportedProperties;
@end
