@interface PETEventProperty : NSObject
@property (nonatomic) Q cardinality;
@property (nonatomic) NSString longestValueString;
@property (nonatomic) NSString name;
- (id)initWithName:;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:;
- (void).cxx_destruct;
- (unsigned long long)cardinality;
- (id)name;
- (id)validRange;
- (id)longestValueString;
- (BOOL)isValidValue:;
+ (id)propertyWithName:possibleValues:;
+ (id)propertyWithName:possibleValues:autoSanitizeValues:;
+ (id)propertyWithName:enumMapping:;
+ (id)propertyWithName:enumMapping:autoSanitizeValues:;
+ (id)propertyWithName:range:clampValues:;
+ (id)propertyWithName:range:;
+ (id)propertyWithName:rangeMin:rangeMax:;
+ (id)freeValuedPropertyWithName:;
@end
