@interface CNVCardParsedDictionaryResultBuilder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)setImageData:;
- (id)build;
- (id)valueForProperty:;
- (void).cxx_destruct;
- (BOOL)setValue:forProperty:;
- (BOOL)canSetValueForProperty:;
- (BOOL)setValues:labels:isPrimaries:forProperty:;
- (BOOL)setImageData:forReference:clipRects:;
- (void)setUnknownProperties:;
- (id)validCountryCodes;
+ (id)factory;
@end
