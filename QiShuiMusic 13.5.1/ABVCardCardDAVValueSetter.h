@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter
@property (nonatomic) BOOL recordIsGroup;
- (id)imageData;
- (id)valueForProperty:;
- (BOOL)setValue:forProperty:;
- (BOOL)propertyIsValidForPerson:;
- (BOOL)setImageData:cropRectX:cropRectY:cropRectWidth:cropRectHeight:;
- (id)copyParsedRecordWithSource:outRecordType:;
- (void)_drainExistingProperties;
- (id)initWithPerson:removeExistingProperties:;
- (id)initWithGroup:removeExistingProperties:;
- (BOOL)recordIsGroup;
- (void)setRecordIsGroup:;
+ (id)_personToGroupPropertyMap;
+ (int)groupPropertyForPersonProperty:;
@end
