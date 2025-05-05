@interface ABVCardValueSetter : NSObject
- (id)fullName;
- (BOOL)setImageData:;
- (id)imageData;
- (id)valueForProperty:;
- (BOOL)setValue:forProperty:;
- (BOOL)propertyIsValidForPerson:;
- (BOOL)setImageData:cropRectX:cropRectY:cropRectWidth:cropRectHeight:;
- (void)setValueInTemporaryCache:forProperty:;
@end
