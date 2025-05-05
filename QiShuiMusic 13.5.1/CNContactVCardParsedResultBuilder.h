@interface CNContactVCardParsedResultBuilder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)build;
- (id)valueForProperty:;
- (void).cxx_destruct;
- (BOOL)setValue:forProperty:;
- (BOOL)canSetValueForProperty:;
- (BOOL)setValues:labels:isPrimaries:forProperty:;
- (BOOL)setImageData:forReference:clipRects:;
- (void)setUnknownProperties:;
- (id)validCountryCodes;
- (long long)contactTypeFromPersonFlags:;
- (unsigned long long)personFlagsByAddingContactType:toFlags:;
- (BOOL)setPersonFlags:;
- (long long)personFlags;
+ (id)os_log;
+ (id)contactKeyForVCardKey:;
+ (id)contactValueTransformForVCardKey:;
+ (id)labeledValuesWithValues:transform:labels:isPrimaries:;
@end
